#include "Strof.h"
#include <stdio.h>
#include <math.h>
#define PI 3.14159

namespace oop1{
    Strof::Strof(){
        this->a = 0;
        //this->x = 0;
    }
    Strof::Strof(double a) {
        this->a = a;
        //this->x = x;
    }

    double Strof::GetYDecart1(double x) {
        double y;
        double  a = this->a;
        y = x * sqrt((x+a)/(a-x));
        return y;


    }
    double Strof::GetYDecart2( double x) {
        double y;
        double  a = this->a;
        y = -x * sqrt((x+a)/(a-x));
        return y;


    }
    double Strof::Volume(){
        double v;
        double  a = this->a;
        v = pow(a,3) * PI * (2* log(2) - 4/3);
                return v;
    }

    double Strof::Areapetl_left(){
        double s1;
        double  a = this->a;
        s1 =pow(a,2) * (2 - PI/2 );
        return s1;

    }
    double Strof::Areapetl_right(){
        double s2;
        double  a = this->a;
        s2 =pow(a,2) * (2  + PI/2 );
        return s2;

    }
    double Strof::Radius(){
        double r;
        double  a = this->a;
        r = a * sqrt(2);
        return r;
    }


    Strof &Strof::Set_A(double a) {
        this->a = a;
        return *this;
    }

}