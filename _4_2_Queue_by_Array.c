#include<stdlib.h>
#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue(int x)
{
    if(rear==N-1)
    {
        printf("\n Queue Overflow");
    }
    else if(front==-1&&rear==-1)
    {
        front=0;
        rear=0;
        queue[rear]=x;
    }
    else
    {
        rear++;
        queue[rear]=x;
    }
}
void dequeue()
{
    if(front==-1&&rear==-1)
    {
        printf("\n Queue Underflow");
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        front++;
    }
}
void display()
{
    printf("\nThe Queue element is\n");
    int i=front;
    for(i;i<=rear;i++)
    {
        printf("%d",queue[i]);
    }
}
void peek()//front
{
    printf("\nThe peek element is %d",queue[front]);
}
int main()
{
    enqueue(5);
    enqueue(4);
    enqueue(3);
    enqueue(2);
    enqueue(1);
    enqueue(0);
    display();
    peek();
    dequeue();
    dequeue();
    dequeue();
    peek();
    dequeue();
    dequeue();
    dequeue();
    display();
    dequeue();
    display();
}