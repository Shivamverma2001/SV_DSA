#include<stdio.h>
#include<stdlib.h>
void linearsearch(int a[5],int data,int n)
{
    int found=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==data)
        {
            printf("The data is present in the array at %d",i+1);
            found=1;
            break;
        }
    }
    if(found==0)
    {
        printf("The element which you enter is not present in the array");
    }
}
int main()
{
    int n=5;
    int a[n],data;
    printf("Enter the data in array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the data you want to search");
    scanf("%d",&data);
    linearsearch(a,data,n);
}