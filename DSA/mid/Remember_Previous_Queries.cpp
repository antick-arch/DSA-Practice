#include <bits/stdc++.h>
using namespace std;

void printList(const list<int> &l)
{
    cout << "L -> ";
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    list<int> temp = l;
    temp.reverse();
    cout << "R -> ";
    for (int val : temp)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    list<int> l;
    int q;
    cin >> q;

    while (q--)
    {
        int x;
        int val;
        cin >> x >> val;

        if (x == 0)
        {
            l.push_front(val);
        }
        else if (x == 1)
        {
            l.push_back(val);
        }
        else if (x == 2)
        {
            int idx = 0;
            for (auto it = l.begin(); it != l.end(); it++, idx++)
            {
                if (idx == val)
                {
                    l.erase(it);
                    break;
                }
            }
        }

        printList(l);
    }

    return 0;
}
