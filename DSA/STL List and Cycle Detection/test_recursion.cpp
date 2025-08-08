#include <bits/stdc++.h>
using namespace std;
// void rec(int i, int val)
// {
//     if (i > val)
//     {
//         return;
//     }
//     rec(i + 1, val);
//     cout << i << endl;
// }
int main()
{
    int val;
    cin >> val;
    // rec(1, val);
    for (int i = 0; i != val; i++)
    {
        cout<<i<<" ";
    }
    
    return 0;
}