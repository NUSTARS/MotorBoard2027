typedef struct SVPWM {
    float duty_a;
    float duty_b;
    float duty_c;
} SVPWM;

SVPWM svpwm(float v_alpha, float v_beta, float v_bus);