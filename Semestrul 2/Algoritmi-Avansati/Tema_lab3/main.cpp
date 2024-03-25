//pozitia unui punct fata de cerc

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long ax,bx,cx,ay,by,cy,px,py,p,x1,x2,y1,y2,z1,z2,t1,t2,t3,s1,s2;
    int m;

    cin>>ax>>ay;
    cin>>bx>>by;
    cin>>cx>>cy;
    vector <long long> v;
    cin>>m;
    for (int i=0;i<m;++i)
    {
        //coordonatele punctelor P
        cin>>px>>py;
        v.push_back(px);
        v.push_back(py);
    }
    for (int i=0;i<2*m;i=i+2)
    {
        px=v[i];
        py=v[i+1];

        // componente ale vectorilor AB, AC și AP
        x1=bx-ax;
        x2=by-ay;
        y1=cx-ax;
        y2=cy-ay;
        z1=px-ax;
        z2=py-ay;

        // pătratele distanțelor dintre punctele A, B, C și P
        t1=bx*bx-ax*ax+by*by-ay*ay;
        t2=cx*cx-ax*ax+cy*cy-ay*ay;
        t3=px*px-ax*ax+py*py-ay*ay;

        //produsele scalare între vectorii AB, AC și AP, în combinație cu pătratele distanțelor
        s1=x1*y2*t3+y1*z2*t1+x2*t2*z1;
        s2=z1*y2*t1+z2*t2*x1+x2*y1*t3;
        cout<<x1<<" "<<x2<<" "<<y1<<" "<<y2<<" "<<z1<<" "<<z2<<"\n"<<t1<<" "<<t2<<" "<<t3<<" "<<s1<<" "<<s2<<endl<<endl;
        //diferența dintre cele două produse scalare calculate anterior
        p=s2-s1;
        if(p>0)
            cout<<"INSIDE"<<"\n";
        else
        if(p==0)
            cout<<"BOUNDARY"<<"\n";
        else
            cout<<"OUTSIDE"<<"\n";

    }
}
