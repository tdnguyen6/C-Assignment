#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << "Input second: ";
    int sec;
    cin >> sec;

    /**
     * First way: Easiest, using setfill and setw from <iomanip>
     */

    int min = sec / 60;
    int hour = min / 60;

    cout << std::setfill('0') << std::setw(2) 
    << hour % 60 << ':' 
    << min % 60 << ':'
    << sec % 60 << endl;

    /**
     * Second way:
        int a,b,c,d,e,f;
        a = (sec/36000) % 10;
        b = (sec/3600) % 10;

        int sec_after_hour = sec % 3600;
        c = (sec_after_hour / 600) % 10;
        d = (sec_after_hour / 60) % 10;

        int sec_after_min = sec_after_hour % 60;
        e = (sec_after_min / 10) % 10;
        f = (sec_after_min % 10);
    
        cout << a << b << ':' << c << d << ':' << e << f;
    */
}
