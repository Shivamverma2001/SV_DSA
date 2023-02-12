#include <iostream>
using namespace std;
int main()
{
    int i, j, k, temp;
    int a[10] = {10, 9, 7, 101, 23, 44, 12, 78, 34, 23};
    cout << "elements are in array";
    for ( i = 0; i < 9; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n printing sorted elements.....\n";
    for (k = 1; k < 10; k++)
    {
       temp=a[k];
       j=k-1;
       while(j>=0&&temp<=a[j])
       {
           a[j+1]=a[j];
           j--;
       }
       a[j+1]=temp;
    }
    for (i = 0; i < 10; i++)
    {
        cout << a[i] << "\n";
    }
    return 0;
}