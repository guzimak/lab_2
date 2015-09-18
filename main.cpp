#include "sdt.h"

//Программа является учебной

int main()
{
    cout  << "Input X, Y: ";
    int x,y;
    cin >> x;
    cin >> y;
    int s,r,d;
    s=x+y;
    r=x-y;
    d=x/y;
    cout << "Result s = " << s << "\n"
         << "Result r = " << r << "\n"
         << "Result d = " << d << "\n";
}
