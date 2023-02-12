#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *pre;  
};
struct node *newnode,*temp,*head,*tail,*curnode,*nextnode;
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
void reverse()
{
curnode=head;
while(curnode!=0)
{
nextnode=curnode->next;
curnode->next=curnode->pre;
curnode->pre=nextnode;
curnode=nextnode;
}
curnode=head;
head=tail;
tail=curnode;
}
int main()
{
create();
display();
printf("\n");
reverse();
display();
}