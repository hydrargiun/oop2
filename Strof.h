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
        void Get_A();
        double GetYDecart1(double x) const;
        double GetYDecart2(double x) const;
        double Volume() const;
        double Areapetl_right() const;
        double Areapetl_left() const;
        double Radius() const;
        double Chestno() const;





    };
}
