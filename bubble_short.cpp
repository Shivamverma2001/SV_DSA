#include<iostream>
using namespace std;

void bubble_sort(int [],int);

int main()
{
    int i,n,item;
    cout<<"\n Enter number of elements in array";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter number"<<i+1<<": ";
        cin>>a[i];
    }
    cout<<"item in array are:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Apply bubble sort:\n";
    bubble_sort(a,n);
    cout<<"Sorted array after applying bubble sort:\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
void bubble_sort(int a[],int n)
{
    int swapped;
    for(int pass=1;pass<=n-1;pass++)
    {
       swapped=0;//solution for bubble short
      for(int pass=1;pass<=n-1;pass++)
      {
          for(int i=0;i<n-pass;i++)
          {
              if(a[i]>a[i+1])
              {
                  int temp=a[i];
                  a[i]=a[i+1];
                  a[i+1]=temp;
              }
          }
      }
        if(swapped)//swapped=0;
        break;
    }
}