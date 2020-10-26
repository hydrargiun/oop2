#include <cmath>

namespace oop2 {
    class Strof {
    private:
        double a;
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
