#include <iostream>

#include "Strof.h"
#include "getnum.h"

namespace oop2{
     void dialog(Strof s) {
         while (true) {
             std::cout << "" << std::endl;
             std::cout << "0. Выход" << std::endl;
             std::cout << "1. Получить y В Декартовых координатах" << std::endl;
             std::cout << "2. Объем тела вращения" << std::endl;
             std::cout << "3. Левая и правая площадь" << std::endl;
             std::cout << "4. радиус кривизны" << std::endl;
             std::cout << "5. Площадь между чем то и чем то" << std::endl;
             std::cout << "6. Смена ппараметра" << std::endl;

             int pt;
             std::cin >> pt;
             if (pt < 0 || pt > 7){
                 std::cout << "wrong number"<< std::endl;
                 continue;
             }
             if (pt == 0) {
                 break;
             }

             if (pt == 1) {
                 s.Get_A();
                 std::cout << "Vvedite x" << std::endl;
                 int x;
                 x = getNum<double>();
                 std::cout << "y1 = " << s.GetYDecart1(x) << std::endl;
                 std::cout << "y2 = " << s.GetYDecart2(x) << std::endl;

             }
             if (pt == 2) {

                 std::cout << s.Volume();

             }

             if (pt == 3) {
                 int a;
                 std::cout << "Левая площадь S1 = " << s.Areapetl_left() << std::endl;
                 std::cout << "Павая площадь S2 = " << s.Areapetl_right() << std::endl;

             }
             if (pt == 4) {
                 std::cout << "Радиус кривизны r = " << s.Radius() << std::endl;

             }
             if (pt == 5){
                 std::cout << "Какая то площадь = " << s.Chestno() << std::endl;
             }
             if (pt == 6) {
                 int new_a;
                 s.Get_A();
                 new_a = getNum<double>();
                 s.Set_A(new_a);
                 s.Get_A();
             }



         }
     }
}
