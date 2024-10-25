#include <iostream>

int policz(int a, int b) {
    return a+b;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "W pierwszym branchu; 2+3=" << policz(3, 5) << std::endl;
    return 0;
}
