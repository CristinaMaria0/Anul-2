// muchii ilegale

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long ax,bx,cx,ay,by,cy,dx,dy,d,x1,x2,y1,y2,z1,z2,t1,t2,t3,s1,s2;

    cin>>ax>>ay;
    cin>>bx>>by;
    cin>>cx>>cy;
    cin>>dx>>dy;

//AB AC AD
    x1=bx-ax;
    x2=by-ay;
    y1=cx-ax;
    y2=cy-ay;
    z1=dx-ax;
    z2=dy-ay;

//patratele distantelor
    t1=bx*bx-ax*ax+by*by-ay*ay;
    t2=cx*cx-ax*ax+cy*cy-ay*ay;
    t3=dx*dx-ax*ax+dy*dy-ay*ay;
//produsul scalar
    s1=x1*y2*t3+y1*z2*t1+x2*t2*z1;
    s2=z1*y2*t1+z2*t2*x1+x2*y1*t3;
    d=s2-s1;
    if(d>0)
        cout << "AC: ILLEGAL" << '\n';

    else
        cout << "AC: LEGAL" << '\n';

//BA BC BD
    x1=cx-bx;
    x2=cy-by;
    y1=dx-bx;
    y2=dy-by;
    z1=ax-bx;
    z2=ay-by;

    t1=cx*cx-bx*bx+cy*cy-by*by;
    t2=dx*dx-bx*bx+dy*dy-by*by;
    t3=ax*ax-bx*bx+ay*ay-by*by;

    s1=x1*y2*t3+y1*z2*t1+x2*t2*z1;
    s2=z1*y2*t1+z2*t2*x1+x2*y1*t3;

    d=s2-s1;
    if(d>0)
        cout << "BD: ILLEGAL" << '\n';
    else
        cout << "BD: LEGAL" << '\n';

}
