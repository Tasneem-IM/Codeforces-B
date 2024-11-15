#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,m,coe,com;
    coe=0;
    com=0;
    cin>>n>>m;
    vector<int>arr(n);
    for(int j=0;j<n;j++)
    {
        cin>>arr[j];
    }
    sort(arr.begin(),arr.end());
   for(int i=0;i<m;i++)
   {
       if(arr[i]>=0)
       {
        coe+=arr[i];
       }
       else if(arr[i]<0)
       {
           com+=arr[i];
       }
   }
   cout<<(-1*com);

    return 0;
}
