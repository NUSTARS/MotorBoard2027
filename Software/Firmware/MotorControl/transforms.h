typedef struct ClarkeTransform {
    float alpha;
    float beta;
} ClarkeTransform;

typedef struct ParkTransform {
    float d;
    float q;
} ParkTransform;

ClarkeTransform clarke_transform(float a, float b, float c);

ParkTransform park_transform(ClarkeTransform clarke, float theta);

ClarkeTransform inverse_park_transform(ParkTransform park, float theta);
