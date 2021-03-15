#include "Ellipse.h"

Ellipse::Ellipse(double a, double b) {
    _a = a;
    _b = b;
    _name = "Ellipse";
    assert((a > 0) && (b > 0));
}

double Ellipse::calculateP() const {
    return 4 * ((PI * _a * _b) + (_a - _b) * (_a - _b)) / (_a + _b);
}

double Ellipse::calculateS() const {
    return PI * _a * _b;
}
