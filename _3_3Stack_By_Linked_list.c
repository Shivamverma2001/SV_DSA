#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *link;
};
struct node *newnode,*temp,*top=0;
void push(int x)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=top;
    top=newnode;
}
void display()
{
    temp=top;
    while(temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->link;
    }
}
void peek()
{
    if(top==0)
    printf("\nEmpty Stack\n");
    else
    printf("\nThe peek element is %d\n",top->data);
}
void pop()
{
    temp=top;
    if(top==0)
    printf("\n Stack is empty\n");
    else
    {
        printf("The pop element is %d",temp->data);
        top=temp->link;
        free(temp);
    }
}
int main()
{
    push(2);
    push(3);
    push(10);
    display();
    peek();
    pop();
    peek();
    display();
}
