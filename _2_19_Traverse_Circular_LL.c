#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *temp, *head, *tail,*newnode;
int count=1;
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
void reverse()
{
    int i=1;
    struct node *pre,*nxt,*cur;
    cur=head;
    nxt=head->next;
    while(cur!=tail)
    {
        pre=cur;
        cur=nxt;
        nxt=cur->next;
        cur->next=pre;
    }
    head=cur;
    nxt->next=tail;
    tail=nxt;
}

int main()
{
    create();
    display();
    printf("\n");
    reverse();
    display();
}