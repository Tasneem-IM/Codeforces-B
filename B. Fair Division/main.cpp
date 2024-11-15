#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sum1=0,sum2=0;
        int n;
        cin>>n;
        while(n--)
        {
            int x;
            cin>>x;
            if(x==1){sum1++;}
            if(x==2){sum2++;}
        }
        if((sum1%2==0&&sum2==0)||(sum1==0&&sum2%2==0)||(sum1%2==0&&sum2%2==0)||((sum1%2==0&&sum1!=0)&&sum2%2!=0))
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}
