#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll n,m;
    cin>>n>>m;
    ll arr[n+1],p1[n+1],p2[n+1];
    for(ll i=1;i<n+1;i++)
    {
       cin>>arr[i];
       if(i==1)
       {
         p1[1]=0;
       }
       else if(arr[i]<=arr[i-1])
       {
         p1[i]=p1[i-1]+(arr[i-1]-arr[i]);
       }
       else
       {
         p1[i]=p1[i-1];
       }
    }

                    for(ll k=n;k>0;k--)
                    {
                       if(k==n)
                       {
                         p2[n]=0;
                       }
                       else if(arr[k]<=arr[k+1])
                       {
                         p2[k]=p2[k+1]+(arr[k+1]-arr[k]);
                       }
                       else
                       {
                         p2[k]=p2[k+1];
                       }
                  }
        ll s,t;
        while(m--)
        {
            cin>>s>>t;
            if(s<t)
            {
               cout<<p1[t]-p1[s]<<endl;
            }
            else if(s>t)
            {
                cout<<p2[t]-p2[s]<<endl;
            }
        }


    return 0;
}
