#include <iostream>
using namespace std;

void mergearray(int arr1[], int arr2[], int n1, int n2, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while((i<n1)&&(j<n2))
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k]=arr2[j];
            j++;
            k++;
        } 
    }
    while(i<n1)
    {
        arr3[k]=arr1[i];
        i++;
        k++;
    }
     while(j<n2)
    {
        arr3[k]=arr2[j];
        j++;
        k++;
    }
}
int main()
{
    int array1[] = {1, 3, 5, 7};
    cout << "element of first array";
    for (int i = 0; i < 4; i++)
    {
        cout << array1[i];
    }
    int n1 = sizeof(array1) / sizeof(array1[0]);
    int array2[] = {2, 4, 6, 8};
    cout << "element of 2nd array";
    for (int i = 0; i < 4; i++)
    {
        cout << array2[i] << " ";
    }
    int n2 = sizeof(array2) / sizeof(array2[0]);
    int array[n1 + n2];
    mergearray(array1, array2, n1, n2, array);
    cout << "array after merging" << endl;
    for (int i = 0; i < n1 + n2; i++)
    {
        cout << array[i] << "\n";
    }
}
