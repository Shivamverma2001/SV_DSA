#include<stdlib.h>
#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
void push()
{
    int x;
    printf("\nEnter the data");
    scanf("%d",&x);
    if(top==N-1)
    {
        printf("\nOverflow");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}
void pop()
{
    int item;
    if(top==-1)
    {
        printf("\nUnderflow");
    }
    else
    {
        item=stack[top];
        top--;
    }
    printf("\nThe pop element is %d",item);
}
void peek()//top()
{
    if(top==-1)
    {
        printf("\nUnderflow condition");
    }
    else
    {
        printf("\nThe top element is %d",stack[top]);
    }
}
void display()
{
    int i;
    printf("\n The element in stack are \n");
    for(i=top;i>=0;i--)
    {
        printf("%d",stack[i]);
    }
}
int main()
{
int choice,con;
do
{
    printf("Enter Choice for Push 1, Pop 2, Peek 3, Displa 4");
    scanf("%d",&con);
    switch(con)
    {
        case 1: push();
        break;
        case 2: pop();
        break;
        case 3: peek();
        break;
        case 4: display();
        break;
        default:
        printf("\nWrong Choice");
    }
    printf("\nDo you want to continue Enter 1 otherwise 0");
    scanf("%d",&choice);
} while (choice!=0);

}