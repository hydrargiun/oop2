#include <iostream>
#include "Strof.h"
#include "dialog.h"

using namespace oop1;
int main() {
    while(1) {
        try {
            dialog();
        }
        catch (int a) {
            std::cout << "bye";
            break;
        }
    }


    return 0;
}
