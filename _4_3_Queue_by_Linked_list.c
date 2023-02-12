#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *newnode,*front,*rear;
void enqueue(int x)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
    if(front==0&&rear==0)
    {
        front=newnode;
        rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}
void dequeue()
{
    struct node *temp;
    temp=front;
    front=front->next;
    free(temp);
}
void peek()
{
    printf("The peek element is %d",front->data);
}
void display()
{
    struct node *temp;
    temp=front;
    printf("\n The queue data is \n");
    while(temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
int main()
{
    front=0;
    rear=0;
    enqueue(5);
    enqueue(4);
    enqueue(3);
    peek();
    display();
    dequeue();
    dequeue();
    peek();
    display();
    dequeue();
    peek();
    dequeue();
}