#include <iostream>
int main() {
    // int a,b,sum;
    // std::cout<<"Input 2 integers \n";
    // std::cin>>a;
    // std::cin>>b;
    // std::string c;
    // sum=a+b;
    // std::cout<<"The sum is: "<<sum;
    // do {
    //     std::cout<<"\n More integers? Y/N \n";
    //     std::cin>>c;
    //     std::cout<<"\n Input an integer \n";
    //     std::cin>>a;
    //     sum=sum + a;
    //     std::cout<<"The sum is: "<<sum;
    // } 
    // while (c=="Y");

    int sum = 0;
    char opt;
    do {
        std::cout << "Input an integer: ";
        int num;
        std::cin >> num;
        sum += num; //sum=sum+num
        std::cout << "Sum is " << sum << std::endl;
        std::cout << "Input another integer (y) or stop (not y)? ";
        std::cin >> opt;
    } while (opt == 'y');
}