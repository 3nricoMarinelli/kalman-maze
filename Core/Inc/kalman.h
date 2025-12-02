#ifndef KALMAN_H
#define KALMAN_H

typedef struct
{
    float Q_angle;   // Process noise variance for the accelerometer
    float Q_bias;    // Process noise variance for the gyro bias
    float R_measure; // Measurement noise variance

    float angle; // The angle calculated by the Kalman filter
    float bias;  // The gyro bias calculated by the Kalman filter
    float rate;  // Unbiased rate calculated from the rate and the calculated bias

    float P[2][2]; // Error covariance matrix
} Kalman_t;

// Global Kalman filter instances
extern Kalman_t kalmanPitch;
extern Kalman_t kalmanRoll;

// Function prototypes
void Kalman_Init(Kalman_t *kalman);
void Kalman_Update(Kalman_t *kalman, float newAngle, float newRate, float dt);

#endif // KALMAN_H
