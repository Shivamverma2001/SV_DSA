#include<iostream>
using namespace std;
//It takes O(n) time to solve this
/*int pow(int m,int n)
{
    if(n==0)
    return 1;
    else
    return pow(m,n-1)*m;
}*/
int pow(int m, int n)
{
    if(n==0)
    return 1;
    if(n%2==0)
    return pow(m*m,n/2);
    else
    return m*pow(m*m,n/2);
}
int main()
{
   int a=pow(2,7);
    cout<<a;
}