#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node *next;
};
struct node *temp,*head;
void delstart()
{
    temp=head;
    head=temp->next;
    free(temp);
}
void enddelete()
{
    struct node *prenode;
    temp=head;
    while(temp->next!=0)
    {
     prenode=temp;
     temp=temp->next;
    }
    prenode->next=0;
    free(temp);
}
void delatpos()
{
    int pos,i=1;
    printf("Enter the position");
    scanf("%d",&pos);
    struct node *nextnode;
    temp=head;
    while(i<pos-1)
    {
     temp=temp->next;
     i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
}
void linkedlisttraverse()
{
    temp=head;
while(temp!=0)
{
    printf("%d",temp->data);
    temp=temp->next;
}
}
int main()
{
    struct node *newnode;
int choice=1;
head=0;
while(choice!=0)
{
newnode= (struct node *)malloc(sizeof(struct node));
printf("Enter the data");
scanf("%d",&newnode->data);
newnode->next=0;
if(head==0)
{
    head=newnode;
    temp=head;
}
else
{
 temp->next=newnode;
 temp=temp->next;
}
printf("Do you want to continue (0,1)?");
scanf("%d",&choice);
}
//delstart();
//enddelete();
delatpos();

linkedlisttraverse();
}
