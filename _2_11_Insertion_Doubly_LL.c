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
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the data\n");
scanf("%d",&newnode->data);
newnode->pre=0;
newnode->next=head;
head->pre=newnode;
head=newnode; 
}
void atend()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the data\n");
scanf("%d",&newnode->data);
newnode->next=0;
newnode->pre=tail;
tail->next=newnode;
tail=newnode;
}
void atpos()
{
int count=0,pos,i=1;
temp=head;
printf("\nEnter the pos where you want to insert the data");
scanf("%d",&pos);
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the data\n");
scanf("%d",&newnode->data);
while(i<pos-1)
{
temp=temp->next;
i++;
}
newnode->next=temp->next;
newnode->pre=temp;
temp->next=newnode;
newnode->next->pre=newnode;
}
void afterpos()
{
int count=0,pos,i=1;
temp=head;
printf("\nEnter the pos after which you want to insert the data");
scanf("%d",&pos);
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the data\n");
scanf("%d",&newnode->data);
while(i<pos)
{
temp=temp->next;
i++;
}
newnode->next=temp->next;
newnode->pre=temp;
temp->next=newnode;
newnode->next->pre=newnode;
}
int main()
{
create();
display();
atbeg();
display();
atend();
display();
afterpos();
display();
atpos();
display();
}