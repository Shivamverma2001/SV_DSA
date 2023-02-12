#include<iostream>
using namespace std;
int main()
{
    int ub,lb,mid,i,n,*p,item,loc;
    cout<<"!!Enter the number of element in input list!!";
    cin>>n;
    p=new int[n];
    cout<<"\n please enter the number of element"<<n<<"value in ascending order";
    for(i=0;i<n;i++)
    {
        cin>>p[i];
    }
    cout<<"\n now enter the number you want to search";
    cin>>item;
    ub=n-1;
    lb=0;
    mid=(ub+lb)/2;
    while((p[mid]!=item)&&(lb<=ub))
    {
        if(p[mid]<item)
        {
            lb=mid+1;
        }
        else
        {
            ub=mid-1;
        }
        mid=(lb+ub)/2;
    }
    if(p[mid]==item)
    {
        loc=mid;
        cout<<"\n number found at position "<<loc+1;
    }
    else
    {
        cout<<"sorry! element is not found!!!!!";
    }
    return 0;
}