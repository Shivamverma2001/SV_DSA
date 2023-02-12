#include<stdlib.h>
#include<stdio.h>
#define N 5
int s[N];
int f=-1,r=-1;
void enqueuefront(int x1)
{
    if(f==-1&&r==-1)
    {
        f=0;
        r=0;
        s[f]=x1;
    }
    else if((f==r+1)||(f==0&&r==N-1))
    {
        printf("\nThe Queue is full");
    }
    else if(f==0)
    {
        f=N-1;
        s[f]=x1;
    }
    else
    {
        f--;
        s[f]=x1;
    }
}
void enqueuerear(int x2)
{
    if(f=-1&&r==-1)
    {
        f=0;
        r=0;
        s[r]=x2;
    }
    else if((f==r+1)||(f==0&&r==N-1))
    {
        printf("The Queue is full");
    }
    else if(r==N-1)
    {
        r=0;
        s[r]=x2;
    }
    else
    {
        r++;
        s[r]=x2;
    }
}
void front()
{
    printf("The peek value from front is %d",s[f]);
}
void rear()
{
    printf("The peek value form rear is %d",s[r]);
}
void dequefront()
{
    if(f==-1&&r==-1)
    {
        printf("The Queue is empty");
    }
    else if(f=N-1)
    {
        printf("%d",s[f]);
        f=0;
    }
    else if(f==r)
    {
        f=-1;
        r=-1;
    }
    else
    {
        printf("%d",s[f]);
        f++;
    }
}
void dequerear()
{
   if(f==-1&&r==-1)
    {
        printf("The Queue is empty");
    }
    else if(r==0)
    {
        printf("%d",s[r]);
        r=N-1;
    }
    else if(f==r)
    {
        f=-1;
        r=-1;
    }
    else
    {
        printf("%d",s[r]);
        r--;
    } 
}
void display()
{
    int i=f;
    printf("\n The queue element is ");
    for(;i!=r;i=(i+1)%N)
    {
        printf("%d",s[i]);
    }
    printf("%d",s[i]);
}
int main()
{
    enqueuefront(2);
    enqueuefront(5);
    enqueuerear(-1);
    enqueuerear(6);
    enqueuefront(7);
    enqueuefront(4);
    display();
    dequefront();
    display();
    dequerear();
    display();
    dequefront();
    display();
}