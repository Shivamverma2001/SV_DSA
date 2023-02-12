#include <iostream>
using namespace std;
void Naive_String_Matching(int *T, int *P, int n, int m)
{
    for (int s = 0; s <= n - m; s++)
    {   
        int i;
        for (i = 0; i < m; i++)
        {
            if (T[s+i]!=P[i])
            {
                break;
            }
        }
        if (i == m)
            {
                cout <<"\nText is found at "<< s;
            }
    }
}
int main()
{
    int text[] = {'a', 'b', 'c', 'a', 'b', 'a', 'a', 'b', 'c', 'b', 'a', 'a', 'b'};
    int pattern[] = {'b','a','a','b'};
    int nt = sizeof(text) / sizeof(text[0]);
    int mp = sizeof(pattern) / sizeof(pattern[0]);
    Naive_String_Matching(text, pattern, nt, mp);
    int text1[] = {0,0,0,0,1,0,0,0,1,0,1,0,0,0,1};
    int pattern1[] = {0,0,0,1};
    int nt1 = sizeof(text1) / sizeof(text1[0]);
    int mp1 = sizeof(pattern1) / sizeof(pattern1[0]);
    Naive_String_Matching(text1, pattern1, nt1, mp1);
    return 0;
}