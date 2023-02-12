#include<stdio.h>
#include<stdlib.h>
int binarySearch(int a[],int data,int n)
{
    int mid,l=0,r=n-1;
    mid=(l+r)/2;
    while((l<r)&&(a[mid]!=data))
    {
     if(data<a[mid])
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
        mid=(l+r)/2;
    }
    if(a[mid]==data)
    return mid+1;
    else
    return -1;
}
int main()
{
    int n=10,a[n],data;
    printf("Enter the data");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the data which you want to search");
    scanf("%d",&data);
    int z=binarySearch(a,data,n);
    if(z<0)
    {
        printf("The data is not present");
    }
    else
    {
        printf("The data is present at %d",z);
    }
}