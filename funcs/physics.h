#include "../StriX.h"
// Here we include the library

#ifndef lightVelocity
#define lightVelocity 299792.458
#endif

#ifndef soundVelocity
#define soundVelocity 0.3432
#endif

#ifndef gravityAcceleration
#define gravityAcceleration 9.8
#endif

static double energy(double mass) {
    return mass * (lightVelocity * lightVelocity);
}

static double force(double mass, double acceleration) {
    return mass * acceleration;
}

static bool fasterThanLight(int n) {
    if (n > lightVelocity) return true;
    else return false;
}

static bool fasterThanLight(double n) {
    if (n > lightVelocity) return true;
    else return false;
}

static bool fasterThanLight(float n) {
    if (n > lightVelocity) return true;
    else return false;
}

static bool slowerThanLight(int n) {
    if (n < lightVelocity) return true;
    else return false;
}

static bool slowerThanLight(double n) {
    if (n > lightVelocity) return true;
    else return false;
}

static bool slowerThanLight(float n) {
    if (n > lightVelocity) return true;
    else return false;
}

static bool fasterThanSound(int n) {
    if (n > lightVelocity) return true;
    else return false;
}

static bool fasterThanSound(double n) {
    if (n > lightVelocity) return true;
    else return false;
}

static bool fasterThanSound(float n) {
    if (n > lightVelocity) return true;
    else return false;
}

static bool slowerThanSound(int n) {
    if (n < soundVelocity) return true;
    else return false;
}

static bool slowerThanSound(double n) {
    if (n > soundVelocity) return true;
    else return false;
}

static bool slowerThanSound(float n) {
    if (n > lightVelocity) return true;
    else return false;
}