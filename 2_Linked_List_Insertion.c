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
struct Node *insertionAtFirst(struct Node *head,int data){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}
//Case 2:At index
struct Node *insertionAtIndex(struct Node *head,int data,int index){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p=head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
//case3:Insert at end
struct Node *insertionAtEnd(struct Node *head,int data){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node *p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}
//Case4: Insert after a node
struct Node *insertionAfterNode(struct Node *head,struct Node *preNode,int data){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=preNode->next;
    preNode->next=ptr;
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

    printf("Linked list before insertion\n");
    linkedListTraversal(head);
    printf("\nLinked list after insertion\n");
    //head=insertionAtFirst(head,56);       //case 1
   // head=insertionAtIndex(head,56,1);     //case2
  // head=insertionAtEnd(head,56);          //case3
  head=insertionAfterNode(head,second,56);  //case4
    linkedListTraversal(head);

    return 0;
}