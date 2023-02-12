#include<iostream>
using namespace std;
int fact(int a)
{
    if(a==0)
    return 1;
    else{
        return fact(a-1)*a;
    }
}
//it take order of O(n)
int comb(int n,int r)
{
   int t1=fact(n);
   int t2=fact(r);
   int t3=fact(n-r);
   return t1/(t2*t3);
}
//To resolve this we use Pascal's triangle
int combs(int n,int r)
{
    if(r==0||n==r)
    return 1;
    else
    return combs(n-1,r-1)+combs(n-1,r);
}
int main()
{
   int a=comb(10,2);
    cout<<a<<endl;
    int b=combs(10,2);
    cout<<b;
}