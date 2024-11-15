#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n + 1], p[n + 1];

    p[0] = 0;
    for (ll i = 1; i <= n; i++)
    {
        cin >> arr[i];
        p[i] = p[i - 1] + arr[i];
    }

    ll ans = 1, mindif = p[k], curdif;

    for (ll j = 1; j <= n - k; j++)
    {
        curdif = p[j + k] - p[j];
        if (curdif < mindif)
        {
            mindif = curdif;
            ans = j + 1;
        }
    }

    cout << ans;
    return 0;
}
