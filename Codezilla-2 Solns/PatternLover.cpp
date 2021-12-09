#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x = 1;
        for (int j = 0; j < n; j++)
        {
            if (j < (n - (i + 1)))
            {
                cout << " "
                     << " ";
            }
            else
            {
                cout << x << " ";
                x++;
            }
        }
        cout << endl;
    }
    return 0;
}