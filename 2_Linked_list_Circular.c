#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void linkedListTraversal(struct Node *head){
    struct Node *ptr=head;
    do
    {
    printf("%d\n",ptr->data);
    ptr=ptr->next;
    }while(ptr!=head);
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    //allocation memory for nodes in the linked list in Heap
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));

    //link first and second nodes
    head->data=7;
    head->next=second;

    //link second and third nodes
    second->data=11;
    second->next=third;

    //terminate the list at the third node
    third->data=66;
    third->next=head;

    linkedListTraversal(head);
    return 0;
}