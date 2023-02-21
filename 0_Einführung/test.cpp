#include <iostream>
// using namespace std;

// create our one namespace abc --> similar to a class in Java
namespace abc {
    void foo() {
        std::cout << "abc::foo()" << std::endl;
    }
}

// another name space test
namespace test {
    void foo() {
        std::cout << "test::foo()" << std::endl;
    }
}

int main(int args, char* argv[]) {
    // cout ist object aus dem namesapce std 
    std::cout << "Hello World!" << std::endl;
    for (int i = 0; i < args; i++) {
        std::cout << i << ": " << argv[i] << std::endl;
    }

    abc::foo();
    test::foo();

    return 10;
}