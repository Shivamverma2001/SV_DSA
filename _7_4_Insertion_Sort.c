#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=6;
    int a[n];
    printf("Enter the element in the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe unsorted array is\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nThe sorted array is\n");
    for(int i=1;i<n;i++)
    {
        int temp=a[i];
        int j;
        for(j=i-1;j>=0&&a[j]>temp;j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=temp;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}