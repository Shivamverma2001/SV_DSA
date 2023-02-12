#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=6,i,j,min;
    int a[n];
    printf("Enter the element in the array\n");
    for( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe unsorted array is\n");
    for( i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nThe sorted array is\n");
    for( i=0;i<n-1;i++)
    {
         min=i;
        for( j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            int temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}