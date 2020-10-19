#include <iostream>

#include "Strof.h"
 namespace oop1{
     void dialog(){
         int a;
         int x;
         std::cout << "введите а" <<std::endl;
         std::cin >> a;
         std::cout << "введите x" <<std::endl;
         std::cin >> x;
         if (a == -1){
         throw 0;
         }
         Strof s(a,x);
         std::cout << "y1 = " << s.GetYDecart1(a,x) <<std::endl;
         std::cout << "y2 = " << s.GetYDecart2(a,x) <<std::endl;
     }

}
