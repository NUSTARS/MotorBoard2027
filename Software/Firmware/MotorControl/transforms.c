
#include "transforms.h"

#include <math.h>

ClarkeTransform clarke_transform(float a, float b, float c) {
    // Clarke transform implementation
    ClarkeTransform clarke_output;

    //defines alpha and beta
    clarke_output.alpha = a;
    clarke_output.beta = (b-c)/sqrt(3);

    return clarke_output; 
}

ParkTransform park_transform(ClarkeTransform clarke, float theta) {
    // Park transform implementation
    ParkTransform park_output;

    //defines q and d
    park_output.q = -sinf(theta) * clarke.alpha + cosf(theta) * clarke.beta;
    park_output.d = cosf(theta) * clarke.alpha + sinf(theta) * clarke.beta;

    return park_output; 
}

ClarkeTransform inverse_park_transform(ParkTransform park, float theta) {
    // Inverse Park transform implementation
    ClarkeTransform inverse_park_output;

    //defines alpha and beta
    inverse_park_output.alpha = park.d * cosf(theta) - park.q * sinf(theta);
    inverse_park_output.beta = park.d * sinf(theta) + park.q * cos(theta);

    return inverse_park_output;
}