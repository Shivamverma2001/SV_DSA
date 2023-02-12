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
    for(int i=0;i<n-1;i++)
    {
        int flag=0,temp=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        break;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}