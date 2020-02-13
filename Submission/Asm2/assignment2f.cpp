#include <iostream>
#include <iomanip>
int main() {
    int a,b;

    double c;
    
    std::cout << "Enter 2 integers \n";
    std::cout << "Dividend: \n";
    std::cin >> a;
    std::cout << "Divisor: \n";
    std::cin >> b;
    std::cout<<std::fixed<<std::setprecision(2);
    while (b==0) {
        std::cout << "Enter divisor again \n";
        std::cin >> b;
    }
    c = a*1.0/b;
    std::cout << sizeof((double) a) << std::endl;
    std::cout << "Quotient: " << c << "\n";
    // std::cout << "Remainder: " << a % b;
}