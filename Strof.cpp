#include "Strof.h"
#include <stdio.h>
#include <math.h>

namespace oop1{
    Strof::Strof(){
        this->a = 0;
        this->x = 0;
    }
    Strof::Strof(double a, double x) {
        this->a = a;
        this->x = x;
    }

    double Strof::GetYDecart1(double a, double x) {
        double y;
        y = x * sqrt((x+a)/(a-x));
        return y;


    }
    double Strof::GetYDecart2(double a, double x) {
        double y;
        y = -x * sqrt((x+a)/(a-x));
        return y;


    }


}