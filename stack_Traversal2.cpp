#include<iostream>
using namespace std;

struct stack
{
    int arr[5];
    int tos;
};
void push(struct stack *,int );
int pop(struct stack *);


int main()
{
    struct stack s;
    int i,x;
    s.tos=-1;//no element store
    for(i=1;i<=6;i++)
    {
        cout<<"Enter element";
        cin>>x;
        push(&s,x);
    }
    for(i=1;i<=6;i++)
    {
        x=pop(&s);
        if(x!=0)
        cout<<"Popped element "<<x<<"\n";
    }

    return 0;
}
void push(struct stack *p,int x)
{
    if(p->tos==4)
    {
        cout<<"stack overflow";
        return;
    }
    p->tos=p->tos+1;
    p->arr[p->tos]=x;
    cout<<"\n Pushed "<<x<<"\n";
}
int pop(struct stack *p)
{
    int x;
    if(p->tos==-1)
    {
        cout<<"stack is underflow";
        return 0;
    }
    x=p->arr[p->tos];
    p->tos-=1;
    return x;
}