#include<iostream>
using namespace std;

struct stack
{
    int arr[5];
    int tos;
};

int main()
{
    struct stack s;
    int i,x;
    s.tos=-1;//no element store
    //for push operation
    for(i=1;i<=5;i++)
    {
        cout<<"Enter elements";
        cin>>x;
        s.tos+=1;
        s.arr[s.tos]=x;
        cout<<"\n Successfully pushed"<<x<<"\n";
    }
    //for pop operation
    for(i=1;i<=5;i++)
    {
        x=s.arr[s.tos];
        s.tos-=1;
        cout<<"Popped element"<<x<<"\n";
    }


    return 0;
}