#include "Parallelogram.h"

Parallelogram::Parallelogram(double a, double b, double angle) {
    _a = a;
    _b = b;
    _angle = angle;
    _name = "Parallelogram";
    assert(angle > 0);
}

double Parallelogram::calculateP() const {
    return 2 * (_a + _b);
}

double Parallelogram::calculateS() const {
    return _a * _b * sin(_angle * PI / 180);
}
