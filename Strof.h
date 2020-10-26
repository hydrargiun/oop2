#include <cmath>

namespace oop1 {
    class Strof {
    private:
        double a;
       // double x;
    public:
        Strof();
        Strof(double a);
        Strof &Set_A(double a);
        Strof &Set_x(double x);
        double GetYDecart1(double x);
        double GetYDecart2(double x);
        double Volume();
        double Areapetl_right();
        double Areapetl_left();
        double Radius();





    };
}
