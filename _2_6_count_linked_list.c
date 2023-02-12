#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *temp,*head;
void linkedlisttraverse()
{
    temp=head;
    while(temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
void count()
{
    int c=0;
    temp=head;
    while(temp!=0)
    {
        temp=temp->next;
        c++;
    }
    printf("\nThe number of nodes is %d",c);
}
int main()
{
    struct node *newnode;
    head=0;
    int choice=1;
    while(choice!=0)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do you want to continue(0,1)?");
        scanf("%d",&choice);
    }
    linkedlisttraverse();
    printf("\n");
    count();
}