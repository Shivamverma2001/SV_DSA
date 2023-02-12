#include<stdlib.h>
#include<stdio.h>
#define N 5
int s1[N],s2[N];
int t1=-1,t2=-1,count=0;
void push1(int data)
{
    if(t1==N-1)
    printf("\nThe Queue is full");
    else
    {
        t1++;
        s1[t1]=data;
    }
}
int pop1()
{
    int A;
    A=s1[t1];
    t1--;
    return A;
}
void push2(int data1)
{
    if(t2==N-1)
    printf("\nThe Second Queue is full");
    else
    {
        t2++;
        s2[t2]=data1;
    }
}
int pop2()
{
    int B;
    B=s2[t2];
    t2--;
    return B;
}
void enqueue(int x)
{
    push1(x);
    count++;
}
void dequeue()
{
    int a,b;
    for(int i=0;i<count;i++)
    {
        a=pop1();
        push2(a);
    }
    b=pop2();
    printf("\nThe pop element is %d",b);
    count--;
    for(int i=0;i<count;i++)
    {
        a=pop2();
        push1(a);
    }
}
void display()
{
    printf("\nThe queue elements are");
    for(int i=0;i<=t1;i++)
    {
        printf("%d",s1[i]);
    }
}
int main()
{
    enqueue(5);
    display();
    enqueue(6);
    display();
    enqueue(7);
    display();
    dequeue();
    display();
}
