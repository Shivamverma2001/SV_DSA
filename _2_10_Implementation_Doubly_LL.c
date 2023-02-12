#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *pre;  
};
struct node *newnode,*temp,*head;
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
    temp=newnode;
    head=newnode;
}
else
{
temp->next=newnode;
newnode->pre=temp;
temp=newnode;
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
int main()
{
create();
display();
}