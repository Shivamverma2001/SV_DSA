#include<iostream>
using namespace std;
//it takes o(n^2)
double e(int x,int n)
{
    static double p=1,f=1;
    int r=0;
    if(n==0)
    return 1;
    else
    {
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}
//To resolve this
double es(int x,int n)
{
    static double s=1;
    if(n==0)
    return s;
    else{
        s=1+(x/n)*s;
        return es(x,n-1);
    }
}
int main()
{
   double a=e(10,35);
    cout<<a<<endl;
    double b=es(10,35);
    cout<<b;
}