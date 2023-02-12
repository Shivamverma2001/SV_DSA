#include <iostream>
//INSERT(LA,N,ITEAM,K)
//INSERTION
using namespace std;

int main()
{
    int arr[5];
    cout<<"Enter the no.";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    int item,pos;
    cout<<"enter the item";
    cin>>item;
    cout<<"enter the pos";
    cin>>pos;
    for(int i=5;i>pos-1;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=item;
     for(int i=0;i<6;i++)
    {
        cout<<arr[i];
    }

}
