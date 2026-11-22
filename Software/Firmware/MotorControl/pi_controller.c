#include "pi_controller.h"

#include <math.h>
#include <stddef.h>

static bool config_is_valid(const pi_controller_config_t *config) {
    return config != NULL && isfinite(config->kp) && config->kp >= 0.0f && isfinite(config->ki) && config->ki >= 0.0f &&
           isfinite(config->output_min) && isfinite(config->output_max) && config->output_min < config->output_max;
}

static float clamp_output(float value, float minimum, float maximum) {
    if (value > maximum) {
        return maximum;
    }
    if (value < minimum) {
        return minimum;
    }
    return value;
}

bool pi_controller_init(pi_controller_t *controller, const pi_controller_config_t *config) {
    if (controller == NULL || !config_is_valid(config)) {
        return false;
    }

    *controller = (pi_controller_t){
        .config = *config,
        .integral = 0.0f,
    };
    return true;
}

void pi_controller_reset(pi_controller_t *controller) {
    if (controller != NULL) {
        controller->integral = 0.0f;
    }
}

bool pi_controller_update(pi_controller_t *controller, float setpoint, float measurement, float dt_seconds,
                          float *output) {
    if (controller == NULL || output == NULL || !config_is_valid(&controller->config) ||
        !isfinite(controller->integral) || !isfinite(setpoint) || !isfinite(measurement) || !isfinite(dt_seconds) ||
        dt_seconds <= 0.0f) {
        return false;
    }

    const float error = setpoint - measurement;
    const float proportional = controller->config.kp * error;
    const float integral_delta = controller->config.ki * error * dt_seconds;
    float integral = controller->integral + integral_delta;
    const float requested_output = proportional + integral;

    if (!isfinite(error) || !isfinite(proportional) || !isfinite(integral_delta) || !isfinite(integral) ||
        !isfinite(requested_output)) {
        return false;
    }

    /* Keep only the integral increment that fits within the output limit. */
    if (requested_output > controller->config.output_max && integral_delta > 0.0f) {
        integral = controller->config.output_max - proportional;
        if (integral < controller->integral) {
            integral = controller->integral;
        }
    } else if (requested_output < controller->config.output_min && integral_delta < 0.0f) {
        integral = controller->config.output_min - proportional;
        if (integral > controller->integral) {
            integral = controller->integral;
        }
    }

    const float result = proportional + integral;
    if (!isfinite(integral) || !isfinite(result)) {
        return false;
    }

    controller->integral = integral;
    *output = clamp_output(result, controller->config.output_min, controller->config.output_max);
    return true;
}
