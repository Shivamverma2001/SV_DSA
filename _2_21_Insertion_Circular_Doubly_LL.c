#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *pre;
    struct node *next;
};
struct node *newnode, *tail, *head, *temp;
void create()
{
    int choice = 1;
    while (choice != 0)
    {
        head = 0;
        while (choice != 0)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("Enter the data");
            scanf("%d", &newnode->data);
            if (head == 0)
            {
                head = newnode;
                tail = newnode;
                head->next = head;
                head->pre = head;
            }
            else
            {
                tail->next = newnode;
                newnode->pre = tail;
                newnode->next=head;
                head->pre = newnode;
                tail = newnode;
            }
            printf("Do you want to continue enter 1 otherwise enter 0");
            scanf("%d",&choice);
        }
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
void atbeg()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data");
    scanf("%d", &newnode->data);
    newnode->next=head;
    head->pre=newnode;
    head=newnode;
    tail->next=head;

}
void atend()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data");
    scanf("%d", &newnode->data);
    tail->next=newnode;
    newnode->pre=tail;
    tail=newnode;
    tail->next=head;
    head->pre=tail;
}
void atpos()
{
    int i=1,pos;
    temp=head;
    printf("Enter position");
    scanf("%d",&pos);
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data");
    scanf("%d", &newnode->data);
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    newnode->pre=temp;
    newnode->next=temp->next;
    newnode->next->pre=newnode;
    temp->next=newnode;

}
int main()
{
    create();
    display();
    printf("\n");
    atbeg();
    display();
    printf("\n");
    atend();
    display();
    atpos();
    display();
    printf("\n");
}