#include "../StriX.h"
// Here we include the library

static double energy(double mass) {
    return mass * (lightVelocity * lightVelocity);
}

static double force(double mass, double acceleration) {
    return mass * acceleration;
}

static bool fasterThanLight(double n) {
    if (n > lightVelocity) return true;
    else return false;
}

static bool slowerThanLight(double n) {
    if (n > lightVelocity) return true;
    else return false;
}

static bool fasterThanSound(double n) {
    if (n > lightVelocity) return true;
    else return false;
}

static bool slowerThanSound(double n) {
    if (n > soundVelocity) return true;
    else return false;
}