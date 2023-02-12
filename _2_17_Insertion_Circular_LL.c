#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *temp, *head, *tail,*newnode;
void create()
{
    int choice = 1;
    head=0;
    while (choice != 0)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data");
        scanf("%d",&newnode->data);
        if(head==0)
        {
            tail=newnode;
            head=newnode;
            tail->next=head;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
            tail->next=head;
        }
        printf("Do you want to continue then press 1 otherwise enter 0");
        scanf("%d",&choice);
    }
}
void display()
{
    temp=head;
    do
    {
        printf("%d",temp->data);
        temp=temp->next;
    } while (temp!=head);
    
}
void insertatbeg()
{
     newnode = (struct node *)malloc(sizeof(struct node));
     printf("Enter the data");
     scanf("%d",&newnode->data);
     newnode->next=head;
     head=newnode;
     tail->next=head;
}
void insertatend()
{
     newnode = (struct node *)malloc(sizeof(struct node));
     printf("Enter the data");
     scanf("%d",&newnode->data);
     tail->next=newnode;
     newnode->next=head;
     tail=newnode;

}
void insertatpos()
{
    int pos,i=1;
    temp=head;
    printf("Enter the position");
    scanf("%d",&pos);
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data");
    scanf("%d",&newnode->data);
    newnode->next=temp->next;
    temp->next=newnode;
}
int main()
{
    create();
    display();
    printf("\n");
    insertatbeg();
    display();
    printf("\n");
    insertatend();
    display();
    printf("\n");
    insertatpos();
    display();
}