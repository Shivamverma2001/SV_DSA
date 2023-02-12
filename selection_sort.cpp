#include <iostream>
using namespace std;
void selection_sort(int[], int);
int main()
{
    int n, a[n], i, item;
    cout << "\n enter number of elements in array";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "enter number::" << i + 1 << " ";
        cin >> a[i];
    }
    cout << "items in the array are" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << "appltying selection sort" << endl;
    selection_sort(a, n);
    cout << "sorting after selection sort" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    return 0;
}
void selection_sort(int a[], int n)
{
    int i, loc, j, min, temp;
    for (i = 0; i < n; i++)
    {
        min=a[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                lkoc=j;
            }
        }
        tem=a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }
}