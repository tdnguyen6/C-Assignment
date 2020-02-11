#include <iostream>
int main() {
    int a,b,sum;
    std::cout<<"Input 2 integers \n";
    std::cin>>a;
    std::cin>>b;
    sum=a+b;
    std::cout<<"The sum is: "<<sum;
    std::string c;
    std::cout<<"\n More integers? Y/N \n";
    std::cin>>c;
    while (c=="Y") {
        std::cout<<"\n Input an integer \n";
        std::cin>>a;
        sum=sum + a;
        std::cout<<"The sum is: "<<sum;
        std::cout<<"\n More integers? Y/N \n";
        std::cin>>c;
    }
}