#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,b,m,v=0,p=0,sumv=0,sump=0;
    cin>>n;
    ll arr[n];
    map<ll,ll> mp;
        for(ll i=1;i<=n;i++)
        {
           cin>>arr[i];
           mp[arr[i]]=i;
        }
            cin>>m;
                while(m--)
                {
                   cin>>b;
                   v=mp[b];
                   sumv+=v;
                   p=(n-v)+1;
                   sump+=p;
                }
    cout<<sumv<<" "<<sump;
    return 0;
}
/*المفتاح والقيمة:

المفتاح (key): هو القيمة التي تستخدم للبحث عن العنصر. في كودك، المفاتيح هي القيم الموجودة في المصفوفة arr.
القيمة (value): هي البيانات المرتبطة بكل مفتاح. في كودك، القيم هي مؤشرات العناصر في المصفوفة.
إضافة عناصر إلى الماب: يتم استخدام التعبير mp[key] = value; لإضافة عنصر إلى الماب. إذا كان المفتاح موجودًا بالفعل، ستقوم بتحديث قيمته.*/
