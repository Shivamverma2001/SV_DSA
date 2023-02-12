#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *temp, *head, *tail;
void create()
{
    int choice = 1;
    struct node *newnode;
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
        printf("\n%d\n",temp->next);
        printf("%d",temp->data);
        temp=temp->next;
    } while (temp!=head);
    
}
int main()
{
    create();
    display();
}