#include<stdio.h>
#include<stdlib.h>

int position(int a[],int lb,int ub)
{
    int pivot,start,end,temp;
    pivot=a[lb];
    start=lb;
    end=ub;
    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
    }
    temp=a[lb];
    a[lb]=a[end];
    a[end]=temp;
    return end;
}

void quicksort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int loc=position(a,lb,ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);
    }
}
int main()
{
    int n=7,lb=0,ub=n-1;
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
    quicksort( a,lb,ub);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}