#include <bits/stdc++.h>

using namespace std;
#define ll             long long
#define vi             vector <int>
#define pii            pair <int, int>
#define mii            map <int, int>
#define vpi            vector <pii>
#define mpi            map <pii, int>
#define spi            set <pii>
#define si             set <int>

int main()
{
    ll t;
    cin>>t;
    while(t--)
	{
	    ll n;
	    cin>>n;
	    ll a[n];
	    for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ll sum=0;
        for(ll i=1;i<n;i++)
        {
            if(a[i]>a[0])
            {
                sum+=(a[i]-a[0]);
            }
        }
        cout<<sum<<endl;

	}
    return 0;
}
