#include<iostream>
using namespace std;
int main()
{
    long n;
    long dr=0,st=0,cont=0;
    int Xp,Yp,Xq,Yq,Xr,Yr,P1x,P1y;
    cin>>n;
    cin>>Xp>>Yp>>Xq>>Yq;
    P1x=Xp; P1y=Yp;
    for(int i=2;i<n;i++)
    {
        cin>>Xr>>Yr;
        long res=Xq*Yr+Xr*Yp+Xp*Yq-Yp*Xq-Xp*Yr-Xr*Yq;
        if(res==0)
            cont++;
        else if (res<0)
            dr++;
        else
            st++;
        Xp=Xq; Yp=Yq;
        Xq=Xr; Yq=Yr;

    }
    Xr=P1x; Yr=P1y;
    long res=Xq*Yr+Xr*Yp+Xp*Yq-Yp*Xq-Xp*Yr-Xr*Yq;
        if(res==0)
            cont++;
        else if (res<0)
            dr++;
        else
            st++;
    cout<<st<<" "<<dr<<" "<<cont<<endl;
    return 0;
}
