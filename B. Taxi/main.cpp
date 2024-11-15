#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    int x=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>=3)
        {
            x++;
        }
        else
        {
        sum+=arr[i];
        }
    }

    if((sum%4)==0)
    {
        cout<<x+(sum/4);
    }
    else
    {
        cout<<x+((sum/4)+1);
    }
    return 0;
}
