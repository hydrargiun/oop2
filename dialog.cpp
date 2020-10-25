#include <iostream>

#include "Strof.h"
 namespace oop1{
     void dialog(Strof s){
         std::cout<<""<<std::endl;
         std::cout<<"0. Выход"<<std::endl;
         std::cout<<"-1. Смена ппараметра"<<std::endl;
         std::cout<<"1. Получить y В Декартовых координатах"<<std::endl;
         std::cout<<"2. Объем тела вращения" <<std::endl;
         std::cout << "3. Левая и правая площадь" << std::endl;

         int pt;
         std::cin >> pt;
         if (pt == -1){
             throw -1;
         }
         if (pt == 0){
             throw 0;
         }

         if (pt == 1){
             std::cout << "Vvedite x" <<std::endl;
             int x;
             std::cin >> x;
             std::cout << "y1 = " << s.GetYDecart1(x) <<std::endl;
             std::cout << "y2 = " << s.GetYDecart2(x) <<std::endl;

         }
         if (pt == 2){

             std::cout << s.Volume();

         }

         if (pt == 3){
             int a;
             std::cout << "Левая площадь S1 = "<< s.Areapetl_left() << std::endl;
             std::cout << "Павая площадь S2 = "<< s.Areapetl_right() << std::endl;

         }
         if (pt == 4){
             std::cout << "Радиус кривизны r = " << s.Radius() << std::endl;

         }







     }

}
