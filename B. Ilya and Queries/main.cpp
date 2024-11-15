#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string st;
    cin >> st;
    ll m , n = st.length();
    cin >> m;
    ll p[n + 1];
    p[1] = 0;

    for (ll i = 2; i <= n; i++)
    {
        if (st[i - 1] == st[i - 2])
        {
            p[i] = p[i - 1] + 1;
        }
        else
        {
            p[i] = p[i - 1];
        }
    }

    //for (ll j = 1; j <= n; j++){cout << p[j] << " ";}
    ll l,r;
    while (m--)
    {
        cin>>l>>r;
        cout<<p[r]-p[l]<<endl;
    }

    return 0;
}
