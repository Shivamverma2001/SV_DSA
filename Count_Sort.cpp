#include <iostream>
using namespace std;
void CountSort(int a[],int n){
    int o[n];
    int c[n];
    int max=a[0];
    //for largest element
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    //initialize with 0
    for(int i=0;i<=max;i++){
        c[i]=0;
    }
    //store count of each element
    for(int i=0;i<n;i++){
        c[a[i]]++;
    }
    //store cummulative count of each element
    for(int i=1;i<=max;i++){
        c[i]+=c[i-1];//c[i]=c[i]+c[i-1]
    }
    //findindex of each element nd placed in original arrar
    for(int i=n-1;i>=0;i--){
        o[c[a[i]]-1]=a[i];
        c[a[i]]--;
    }//copy
    for(int i=0;i<n;i++){
        a[i]=o[i];
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    //input
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //Count sort
    CountSort(a,n);
    //output
    cout<<"The array after Count Sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}