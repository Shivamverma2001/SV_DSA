#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *pre;  
};
struct node *newnode,*temp,*head,*tail;
void create()
{
int choice=1;
head=0;
while(choice!=0)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the data");
scanf("%d",&newnode->data);
newnode->pre=0;
newnode->next=0;
if(head==0)
{
    tail=newnode;
    head=newnode;
}
else
{
tail->next=newnode;
newnode->pre=tail;
tail=newnode;
}
printf("Do you want to continue press 1 otherwise press 0");
scanf("%d",&choice);
}}
void display()
{
    temp=head;
    while(temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
void atbeg()
{
if(head==0)
{
printf("Empty Linked List");
}
else
{
temp=head;
head=head->next;
head->pre=0;
free(temp);
}
}
void atend()
{
if(tail==0)
{
printf("Empty Linked List");
}
else
{
temp=tail;
tail=tail->pre;
tail->next=0;
free(temp);
}
}
void atpos()
{
int pos,i=1;
temp=head;
printf("\nEnter the position where you want to delete\n");
scanf("%d",&pos);
while(i<pos)
{
temp=temp->next;
i++;
}
temp->next->pre=temp->pre;
temp->pre->next=temp->next;
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
printf("\n");
atpos();
display();
}