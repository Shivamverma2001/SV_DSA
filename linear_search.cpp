//linear search
#include <iostream>
using namespace std;
int main()
{
    int ub,lb,i,n,*p,loc,item;
    cout<<"!! enter the number of elements in input list!!";
    cin>>n;
    p=new int[n];
    
    for ( i = 0; i < n; i++)
    {
       cin>>p[i];
    }
    cout<<" \n enter number you want to search";
    cin>>item;
    ub=n-1;
    lb=0;
    i=0;
    while((p[i]!=item)&&(lb<=ub))
    {
        i++;
    }
    if(p[i]==item)
    {
        loc=i;
        lb++;
        cout<<"\n number found at position "<<loc+1;
    }
    if(p[i]!=item)
    {
     cout<<"sorry !! element is not found in the array";
    }
    return 0;
}