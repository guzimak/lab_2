#include "sdt.h"

//��������� �������� �������

int main()
{
    cout  << "Input X, Y: ";
    int x,y;
    cin >> x;
    cin >> y;
    int s,r,p,d;
    s=x+y;
    r=x-y;
    p=x*y;
    d=x/y;
    cout << "Result s = " << s << '\n'
         << "Result r = " << r << '\n'
         << "Result p = " << p << '\n'
         << "Result d = " << d << '\n';

}
