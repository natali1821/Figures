#ifndef PARALLELOGRAM_H_INCLUDED
#define PARALLELOGRAM_H_INCLUDED
#include "Figure.h"

class Parallelogram : public Figure {
public:
    Parallelogram(double a, double b, double angle);
    double calculateP() const override;
    double calculateS() const override;
protected:
    double _a, _b, _angle;
    const double PI = 3.14159265;
};


#endif // PARALLELOGRAM_H_INCLUDED
