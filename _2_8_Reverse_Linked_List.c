#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node *next;
};
struct node *temp,*head;
void reverse()
{
    struct node *prenode,*currentnode,*nextnode;
    prenode=0;
    currentnode=head;
    nextnode=head;
    while(nextnode!=0)
    {
        nextnode=nextnode->next;
        currentnode->next=prenode;
        prenode=currentnode;
        currentnode=nextnode;
    }
    head=prenode;
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


linkedlisttraverse();
printf("\n\n\n");
reverse();
linkedlisttraverse();
}
