#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *newnode,*root;
struct node *create()
{
    int x;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data(-1 for no node)");
    scanf("%d",&x);
    if(x==-1)
    {
        return 0;
    }
    newnode->data=x;
    printf("Enter left child%d",x);
    newnode->left=create();
    printf("Enter right child%d",x);
    newnode->right=create();
    return newnode;
}
void main()
{
    root=0;
    root=create();
}