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
    temp=head;
    tail->next=temp->next;
    temp->next->pre=tail;
    head=temp->next;
    free(temp);

}
void atend()
{
    temp=tail;
    head->pre=temp->pre;
    temp->pre->next=head;
    tail=temp->pre;
    free(temp);
}
void atpos()
{
    int i=1,pos;
    temp=head;
    printf("Enter position");
    scanf("%d",&pos);
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    temp->pre->next=temp->next;
    temp->next->pre=temp->pre;
    free(temp);
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