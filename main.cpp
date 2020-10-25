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

        try {
            dialog(strof);

        }
            catch (std::bad_alloc &ba) {
                std::cout << "Error in allocating memory: " << ba.what() << std::endl;
            }
            catch (std::exception &ex) {
                std::cout << "Exception detected: " << ex.what() << std::endl;
            }
            catch (...) {
                std::cout << "Unknown error occured!" << std::endl;
            }

    return 0;
}
