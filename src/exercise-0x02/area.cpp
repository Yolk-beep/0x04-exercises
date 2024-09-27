#include "area.hpp"
#include <cmath>

// Circle
double Carea(double x)
{
    double CArea = x*M_PI;
    return CArea;
}
// Rectangle
double Rarea(double x, double y)
{
    double Rarea = x*y;
    return Rarea;
}
// Triangle
double Tarea(double x, double y)
{
    double Tarea = x*y*1/2;
    return Tarea;
}

