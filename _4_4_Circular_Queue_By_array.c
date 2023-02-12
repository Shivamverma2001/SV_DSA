#include<stdlib.h>
#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue(int x)
{
    if(front==-1&&rear==-1)
    {
        front=0;
        rear=0;
        queue[rear]=x;
    }
    else if(((rear+1)%N)==front)
    {
        printf("\nOverflow");
    }
    else
    {
        rear=(rear+1)%N;
        queue[rear]=x;
    }
}
void dequeue()
{

    if(front==-1&&rear==-1)
    {
        printf("\nUnderflow");
    }
    else if(((front+1)%N)==rear)
    {
        printf("\n The dequeue element is %d",queue[front]);
        front=-1;
        rear=-1;
    }
    else
    {
        printf("\nThe dequeue element is %d",queue[front]);
        front=(front+1)%N;
    }
}
void peek()
{
    printf("\n The peek element is %d",queue[front]);
}
void display()
{
    int i;
    printf("\n The queue element is \n");
    for(i=front;i!=rear;i=((i+1)%N))
    {
        printf("%d",queue[i]);
    }
    printf("%d",queue[i]);
}
int main()
{
    enqueue(2);
    enqueue(0);
    enqueue(5);
    enqueue(1);
    enqueue(6);
    display();
    enqueue(7);
    peek();
    display();
    dequeue();
    peek();
    display();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
}