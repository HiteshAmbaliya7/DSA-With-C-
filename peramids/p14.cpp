#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 69; i >= 65; i--)
    {
        for (int j = 69; j >= i; j--)
        {
            cout << char(i) << " ";
        }
        cout << endl;
    }

    return 0;
}