#include<iostream>
using namespace std;
//it takes complexity of O(2^n)
int fib(int n)
{
    if(n<=1)
    return n;
    else
    return fib(n-1)+fib(n-1);
}
//To resolve we use Memorization
int f[10];
int fibs(int n)
{
    if(n<=1)
    {
        f[n]=n;
        return n;
    }
    else
    {
        if(f[n-2]==-1)
        f[n-2]=fibs(n-2);
        if(f[n-1]==-1)
        f[n-1]=fibs(n-1);
        return f[n-2]+f[n-1];
        
    }
}

int main()
{
    int a=fib(10);
    cout<<a<<endl;
    int b=fibs(10);
    cout<<b;
}