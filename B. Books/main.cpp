#include <iostream>
#define ll long long
using namespace std;

const ll N = 4e5+1;
ll n, t, arr[N];

bool valid(ll x) {
    ll currsum = 0;
    for (int i = 0; i < x; i++) {
        currsum += arr[i];
    }
    if (currsum <= t) {
        return true;
    }
    for (int i = x; i < n; i++) {
        currsum += arr[i];
        currsum -= arr[i - x];
        if (currsum <= t) {
            return true;
        }
    }
    return false;
}

int main() {
    cin >> n >> t;
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll l = 1, r = 1;

    if (!valid(1)) {
        cout << "0";
    } else {
        while (valid(r)) {
            r *= 2;
            if (r > n) {
                r = n;
                break;
            }
        }

        while (l < r) {
            ll m = (l + r + 1) / 2;
            if (valid(m)) {
                l = m;
            } else {
                r = m - 1;
            }
        }

        cout << l;
    }

    return 0;
}

/*#include <iostream>
#define ll long long
using namespace std;
const ll N = 4e5+1,M=1e5+1;
ll n,t,arr[N];

bool valid(ll x)
{
    ll maxsum=0;
    for(int i=0;i<=n-x;i++)
    {
        ll currsum=0;
        for(int j=i;j<i+x;j++)//رينج الجمع
        {
           currsum+=arr[j];
        }
        if(currsum>maxsum&&currsum<=t)
        {
            maxsum=currsum;
        }
    }

    return maxsum<=t;
}
int main()
{
    cin>>n>>t;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    ll l=1,r=1;
    if(!valid(1))
    {
        cout<<"0";
    }

    else
    {
        while(valid(r))
        {
          r*=2;
        }
        while(l+1<r)
        {
            ll m=(l+r)/2;
            if(valid(m))
            {
                l=m;
            }
            else
            {
                r=m;
            }
        }
        cout<<l;
    }

    return 0;
}
*/
