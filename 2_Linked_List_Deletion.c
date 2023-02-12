#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void linkedListTraversal(struct Node *ptr){
    while(ptr!=NULL)
    {
    printf("%d\n",ptr->data);
    ptr=ptr->next;
    }
}
//Case1: At begining
struct Node *deletionAtFirst(struct Node *head){
    struct Node *ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
//Case 2:At index
struct Node *deletionAtIndex(struct Node *head,int index){
    struct Node *p=head;
    struct Node *q=head->next;
    for (int i = 0; i < index-1; i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
//case3:Delete at end
struct Node *deletionAtEnd(struct Node *head){
   struct Node *p=head;
   struct Node *q=head->next;
   while(q->next!=NULL)
   {
       p=p->next;
       q=q->next;
   }
   p->next=NULL;
free(q);
    return head;
}
//Case4: Delete after a node
struct Node *deletionAfterNode(struct Node *head,int value){
    struct Node *p=head;
    struct Node *q=head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
        p->next=q->next;
        free(q);
    }
    return head;
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
    third->next=NULL;

    printf("Linked list before deletion\n");
    linkedListTraversal(head);
    printf("\nLinked list after deletion\n");
   // head=deletionAtFirst(head);       //case 1
   // head=deletionAtIndex(head,2);     //case2
  // head=deletionAtEnd(head);          //case3
  head=deletionAfterNode(head,11);  //case4
    linkedListTraversal(head);

    return 0;
}