#include <iostream>
using namespace std;

int main()
{
    int n;
    double ans;
    cin>>n;
    double arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
      ans+=arr[i]/100;
    }

    cout<<(ans/n)*100;


    return 0;
}
