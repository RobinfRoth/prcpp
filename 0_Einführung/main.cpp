#include <iostream>

void foo2(); // declaration of function

static void foo1() {
    std::cout << "foo1" << std::endl;
} // only available inside this compilation unity   

int main(int args, char* argv[]) {
    foo1(); // works, since it is the same compilation unit
    foo2(); // works as well, when linked together via CMake
}