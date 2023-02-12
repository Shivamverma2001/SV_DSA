#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *create()
{
    int x;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter the data(-1 for no node)");
    scanf("%d",&x);
    if(x==-1)
    {
       return 0;
    }
    newnode->data=x;
    printf("\n Enter the left child %d\n",x);
    newnode->left=create();
    printf("\n Enter the right child %d\n",x);
    newnode->right=create();
    return newnode;
}
void pre(struct node *root)
{
    if(root!=NULL)
    {
    printf("%d",root->data);
    pre(root->left);
    pre(root->right);
    }
}
void post(struct node *r1)
{
    if(r1!=0)
    {
    post(r1->left);
    post(r1->right);
    printf("%d",r1->data);
    }  
}
void in(struct node *r)
{
    if(r!=0)
{
    in(r->left);
    printf("%d",r->data);
    in(r->right);
}

}
int main()
{
    struct node *root;
    root=0;
    root=create();
    printf("\n Pre-order traversal is\n");
    pre(root);
    printf("\n Post-order traversal is\n");
    post(root);
    printf("\n In-order traversal is\n");
    in(root);
}