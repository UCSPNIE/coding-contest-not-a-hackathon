#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        ll ans1 = max((ll)0, max(b, c) - a + 1);
        ll ans2 = max((ll)0, max(a, c) - b + 1);
        ll ans3 = max((ll)0, max(a, b) - c + 1);
        cout << ans1 << " " << ans2 << " " << ans3 << endl;
    }
    return 0;
}