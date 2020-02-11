#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    cout<<"Enter 2 integers \n";
    int a,b;
    string c;
    cin>>a;
    cin>>b;
    cout<<"More integers? Y/N \n";
    cin>>c;
    if (c=="N") {
        cout<<"1:Sum 2:Difference 3:Product 4:Quotient \n";
        int operation;
        cin>>operation;
        switch (operation) {
            case 1:
                cout<<a+b;
                break;
            case 2:
                cout<<abs(a-b);
                break;
            case 3:
                cout<<a*b;
                break;
            case 4:
                cout<<a/b;
                break;
        }
    }
    else {
        int sum,pro;
        sum=a+b;
        pro=a*b;
        while (c=="Y"){
            cout<<"Enter an integer \n";
            cin>>a;
            sum += a;
            pro=pro*a;
            cout<<"1: Sum 2: Product \n";
            int operation;
            cin>>operation;
            if (operation==1)
                cout<<sum;
            else
                cout<<pro;
            cout<<" \n More integers? Y/N \n";
            cin>>c;
        }
    }
}