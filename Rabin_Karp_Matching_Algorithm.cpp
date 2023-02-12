#include<iostream>
#include<stdlib.h>
using namespace std;
#define d 10
//for int use int *ptn,int *txt
void rabbinKarp(char *ptn,char *txt,int q,int n,int m){
    int i,j;
    int p=0;
    int t=0;
    int h=1;
    for(i=0;i<m-1;i++)
        h=(h*d)%q;
    for(i=0;i<m;i++){
        p=( d*p + ptn[i] )%q;
        t=( d*t + txt[i] )%q;
    }
    for(i=0;i<=n-m;i++){
        if(p==t)
        {
            for(j=0;j<m;j++)
            {
                if(txt[i+j]!=ptn[j])
                {
                    break;
                }
            }    
            if(j==m)
            {
                cout<<"Pattern found at index "<<i<<endl;
            }
        }
        if(i<n-m)
        {
            t=( d*( t- txt[i]*h ) + txt[i+m] )%q;
            if(t<0)
            t=(t+q);
        }
    }
}
int main(){
  /*for numeric value    
    int txt[]={2,3,5,9,0,2,3,1,4,1,5,2,6,7,3,9,9,2,1};
    int p[]={3,1,4,1,5,2};
    int q=13;
    int n=sizeof(txt)/sizeof(txt[0]);
    int m=sizeof(p)/sizeof(p[0]);
    rabbinKarp(p,txt,q,n,m);*/

    //for char value
    int q=13;
    char text[] = {'a', 'b', 'c', 'a', 'b', 'a', 'a', 'b', 'c', 'b', 'a', '};
    char pattern[] = {'b','a','a','b'};
    int nt = sizeof(text) / sizeof(text[0]);
    int mp = sizeof(pattern) / sizeof(pattern[0]);
    rabbinKarp(pattern,text,q, nt, mp);
    return 0;
}