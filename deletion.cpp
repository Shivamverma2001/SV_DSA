#include <iostream>
//Deletion(LA,N,ITEM,K)
using namespace std;

int main()
{
    int arr[5];
    cout<<"Enter the no.";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    int pos;
    cout<<"enter the pos";
    cin>>pos;
     for(int i=pos-1;i<5;i++)
     {
         arr[i]=arr[i+1];
     }
     for(int i=0;i<4;i++)
    {
        cout<<arr[i];
    }
}
