#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *newnode, *newnode1, *head, *temp;
    head = 0;
    int choice = 1, insertchoice;
    while (choice != 0)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            temp = newnode;
            head = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you want to continue(0,1)?");
        scanf("%d", &choice);
    }
    temp = head;
    while (temp != 0)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
    printf("\nwhere you want to insert for beg enter 1, for end enter 0 and to insert between enter and number");
    scanf("%d", &insertchoice);
    if (insertchoice == 1)
    {
        newnode1 = (struct node *)malloc(sizeof(struct node));
        printf("\nenter the data which you want to insert");
        scanf("%d", &newnode1->data);
        newnode1->next = head;
        head = newnode1;
        temp = head;
        while (temp != 0)
        {
            printf("%d", temp->data);
            temp = temp->next;
        }
    }
    else if (insertchoice == 0)
    {
        newnode1 = (struct node *)malloc(sizeof(struct node));
        printf("\nenter the data which you want to insert");
        scanf("%d", &newnode1->data);
        newnode1->next = 0;
        temp = head;
        while (temp->next != 0)
        {
            temp = temp->next;
        }
        temp->next = newnode1;
        temp = head;
        while (temp != 0)
        {
            printf("%d", temp->data);
            temp = temp->next;
        }
    }
    else
    {
        int i = 1,count=1,pos;
        pos=0;
        newnode1 = (struct node *)malloc(sizeof(struct node));
        printf("\nenter the position where you want to insert the data");
        scanf("%d", &pos);
        temp = head;
        while (temp != 0)
        {
            temp = temp->next;
            count++;
        }
        if(pos>count)
        {
            printf("Invalid position");
        }
        else
        {
        temp=head;
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        printf("\nenter the data which you want to insert");
        scanf("%d", &newnode1->data);
        newnode1->next = temp->next;
        temp->next = newnode1;
        temp = head;
        while (temp != 0)
        {
            printf("%d", temp->data);
            temp = temp->next;
        }}
    }
}
