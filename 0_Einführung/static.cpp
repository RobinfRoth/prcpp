#include <iostream>

void foo2(); // declaration

static void foo1() {
    std::cout << "foo1" << std::endl;
} // nur innerhalb der kompliationseinheit verfügbar

int main(int args, char* argv[]) {
    foo1(); // geht, da in der selben kompilationseinheit
    foo2();
}