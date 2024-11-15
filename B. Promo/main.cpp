#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {


    ll n, q;
    cin >> n >> q;

    vector<ll> a(n + 1);
    vector<ll> b(n + 1, 0);

    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
    }

    sort(a.begin() + 1, a.end(), greater<ll>());

    for (ll j = 1; j <= n; j++) {
        b[j] = b[j - 1] + a[j];
    }

    while (q--) {
        ll x, y;
        cin >> x >> y;
        cout << b[x] - b[x - y] << endl;
    }

    return 0;
}
