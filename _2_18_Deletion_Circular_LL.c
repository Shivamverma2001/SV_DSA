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
void deleteatbeg()
{
     temp=head;
     head=head->next;
     tail->next=head;
     free(temp);
}
void deleteatend()
{
     struct node *pre;
     temp=head;
     while(temp->next!=head)
     {
         pre=temp;
         temp=temp->next;
     }
     pre->next=head;
     tail->next=pre;
}
void deleteatpos()
{
    struct node *pre;
    int pos,i=1;
    temp=head;
    printf("Enter the position");
    scanf("%d",&pos);
    while(i<pos-1)
    {
        pre=temp;
        temp=temp->next;
        i++;
    }
    pre=temp->next;
    temp->next=pre->next;
    free(temp);
}
int main()
{
    create();
    display();
    printf("\n");
    deleteatbeg();
    display();
    printf("\n");
    deleteatend();
    display();
    printf("\n");
    deleteatpos();
    display();
}