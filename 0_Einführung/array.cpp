#include <iostream>

constexpr int foo() {
    return 1 << 15; // bitshift
}

int main(int args, char* argv[]) {
   constexpr int size = foo(); // available at compile time
   double a[size]; // no "new" keyword => is stored on stack
}