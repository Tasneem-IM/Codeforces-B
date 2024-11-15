#include <iostream>
#define ll long long
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        pair<char,char>pa[n];
        for(ll i=0;i<n;i++)
        {
            string s;
            cin>>s;
            pa[i].first = s[0];
            pa[i].second = s[1];
        }
            //6
            //a c d a c e
            //b b b a c f
            ll ans=0;
        for(ll i=0;i<n;i++)
        {
            for(ll j=i;j<n;j++)
            {
            if(pa[i].first==pa[j].first^pa[i].second==pa[j].second)
              {
                  ans++;
              }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
