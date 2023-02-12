#include <stdio.h>
#include <stdlib.h>

struct node
{
int data;
struct node *next;
};
int main()
{
    struct node *newnode,*head,*temp;
    head=0;
    int choice,count;
    while(choice!=0)
    {
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==0)
    {
        temp=newnode;
        head=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
    printf("Do you want to continue(0,1)?");
    scanf("%d",&choice);
    }
    temp=head;
    while(temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
        count++;
    }
    printf("%d \n",count);
}
