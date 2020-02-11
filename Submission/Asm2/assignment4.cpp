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
        int d;
        cin>>d;
        if (d==1) {
            cout<<a+b;
        }
        else
        {
            if (d==2) {
                cout<<abs(a-b);
            }
            else
            {
                if (d==3){
                    cout<<a*b;
                }
                else
                {
                    cout<<a/b;
                }
                
            }
            
        }
        
    }
    else {
        int sum,pro;
        sum=a+b;
        pro=a*b;
        while (c=="Y"){
            cout<<"Enter an integer \n";
            cin>>a;
            sum=sum+a;
            pro=pro*a;
            cout<<"1: Sum 2: Pro \n";
            int d;
            cin>>d;
            if (d==1) {
                cout<<sum;
            }
            else {
                cout<<pro;
            }
            cout<<" \n More integers? Y/N \n";
            cin>>c;
        }
    }
        
}