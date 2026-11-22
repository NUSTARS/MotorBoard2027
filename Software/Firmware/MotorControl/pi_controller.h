#include <stdbool.h>

typedef struct {
    float kp; /* Strength of response to current error */
    float ki; /* Strength of response to accumulated error */
    float output_min;
    float output_max;
} pi_controller_config_t;

/* Initialize one instance per control loop */
typedef struct {
    pi_controller_config_t config;
    float integral;
} pi_controller_t;

/* Copy finite settings and reset.
 * Returns false on invalid input.
 */
bool pi_controller_init(pi_controller_t *controller, const pi_controller_config_t *config);

/* Clear the integral only. */
void pi_controller_reset(pi_controller_t *controller);

/* PI step with clamping and anti-windup.
 * Returns false on invalid input/overflow.
 */
bool pi_controller_update(pi_controller_t *controller, float setpoint, float measurement, float dt_seconds,
                          float *output);
