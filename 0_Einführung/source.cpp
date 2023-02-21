#include <iostream>
#include <cstdint>

// add static and it wont work anymore, since it is only available in this compilation unit
void foo2() {
    std::cout << "foo2" << std::endl;
}