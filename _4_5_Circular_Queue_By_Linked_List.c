#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *next; 
};
struct node *newnode,*front,*rear,*temp;
void enqueue(int x)
{
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
    if(front==0)
    {
        front=newnode;
        rear=front;
        rear->next=front;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
        rear->next=front;
    }
}
void dequeue()
{
    temp=front;
    front=front->next;
    free(temp);
    rear->next=front;
}
void peek()
{
    printf("\n The peek element is %d",front->data);
}
void display()
{
    temp=front;
    printf("\nThe queue elements are \n");
    do
    {
        printf("%d",temp->data);
        temp=temp->next;
    } while (temp!=front);
    
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
    peek();
    display();
}