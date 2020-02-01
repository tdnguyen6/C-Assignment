#include <iostream>
int main() {
    int a,b,c;
    std::cout << "Enter 2 integers \n";
    std::cout << "Dividend: \n";
    std::cin >> a;
    std::cout << "Divisor: \n";
    std::cin >> b;
    /**
     * Instead of just checking for b == 0 once,
     * We can use a while loop:
     * while (b == 0) { 
     *     std::cout << "Divisor cannot be 0, please input another divisor: \n";
     *     std::cin >> b;
     * }
     */
    if (b==0) {
        std::cout << "Enter divisor again \n";
        std::cin >> b;
    }
    c=a/b;
    std::cout << "Quotient: " << c << "\n";

    /** 
     * This formula is usable only in this case.
     * In other cases, it is tedious as we need 
     * to calculate the quotient first.
     * 
     * There is another operator for calculating
     * remainder directly called the modulus
     * operator: %.
     * Instead of a-b*c, we write: a % b
     */
    std::cout << "Remainder: " << a-b*c;
}