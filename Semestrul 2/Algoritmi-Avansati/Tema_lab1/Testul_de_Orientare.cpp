#include<iostream>
using namespace std;
int main()
{
    long Xp,Yp,Xq,Yq,Xr,Yr,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>Xp>>Yp>>Xq>>Yq>>Xr>>Yr;
        long res;
        res=Xq*Yr+Xr*Yp+Xp*Yq-Yp*Xq-Xp*Yr-Xr*Yq;
        if(res==0)
            cout<<"TOUCH"<<endl;
        else if (res<0)
            cout<<"RIGHT"<<endl;
        else
            cout<<"LEFT"<<endl;
    }
    return 0;



}
