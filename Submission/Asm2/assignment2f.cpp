#include <iostream>
int main() {
    int a,b,c;
    std::cout << "Enter 2 integers \n";
    std::cout << "Dividend: \n";
    std::cin >> a;
    std::cout << "Divisor: \n";
    std::cin >> b;
    while (b==0) {
        std::cout << "Enter divisor again \n";
        std::cin >> b;
    }
    c=a/b;
    std::cout << "Quotient: " << c << "\n";
    std::cout << "Remainder: " << a % b;
}