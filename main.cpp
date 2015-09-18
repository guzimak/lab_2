#include "sdt.h"

//Программа является учебной

int main()
{
    cout  << "Input X, Y: ";
    int x,y;
    cin >> x;
    cin >> y;
    int s,r,p;
    s=x+y;
    r=x-y;
    p=x*y;
    cout << "Result s = " << s << '\n'
         << "Result r = " << r << '\n'
         << "Result p = " << p << '\n';
}
