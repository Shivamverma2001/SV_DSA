#include <iostream>
//Deletion(LA,N,ITEM,K)
using namespace std;
int count=3;
void my_re_fun(int n)
{
    if(n==0)
    return ;
    count--;
    my_re_fun(n/10);
}

int main()
{
my_re_fun(1234543210);
cout<<count;
return 0;
}