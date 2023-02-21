#include <iostream>
#include <cstdint>

// auto creates a function for every type that calls it
void print(auto v) {
    std::cout << v << ", Anzahl Bytes:" << sizeof(v) << std::endl;
}

int main(int args, char* argv[]) {
    char c = 'A';
    uint16_t s = 23; // unsigned int
    int32_t i = 10'000; // signed int (Zweierkomplement)
    int64_t l = 10'000'000'000;
    float f = 0.1f;
    double d = 1.1;

    print(c);
    print(s);
    print(i);
    print(l);
    print(f);
    print(d);
}