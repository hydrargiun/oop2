#include <iostream>
#include "Strof.h"
#include "dialog.h"

using namespace oop1;
int main() {
    int a;
    int x;
    std::cout << "введите а" <<std::endl;
    std::cin >> a;
    Strof strof(a);
    //strof.Set_A(a);
    //strof.Set_x(x);
    while(1) {
        try {
            dialog(strof);

        }
        catch (int a) {
            if (a == 0){
            std::cout << "bye";
            break;
            }
            if (a == -1){
                int z;
                int y;
                std::cout << "введите а" <<std::endl;
                std::cin >> z;
                strof = strof.Set_A(z);
            }

        }
    }


    return 0;
}
