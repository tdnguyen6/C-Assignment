#include <iostream>
using namespace std;
int main()
{
    bool ifprime;
    ifprime = true;
    unsigned int a, divisor, remainder;
    cout << "Input a natural number";
    cin >> a;
    for (divisor = 2; divisor < a; divisor++)
    {
        remainder = a % divisor;
        cout << 'r' << remainder << endl
             << 'd' << divisor << endl
             << endl;
        if (remainder == 0)
        {
            ifprime = false;
            break;
        }
    }
    (ifprime == false) ? cout << "not prime" : cout << "prime";
}