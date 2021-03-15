#ifndef ELLIPSE_H_INCLUDED
#define ELLIPSE_H_INCLUDED
#include "Figure.h"

class Ellipse : public Figure {
public:
    Ellipse(double a, double b);
    double calculateS() const override;
    double calculateP() const override;
protected:
    const double PI = 3.14159265;
    double _a, _b;
};

#endif // ELLIPSE_H_INCLUDED
