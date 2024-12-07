#include <iostream>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n],co=0;
        for(int k=0;k<n;k++)
        {    
            cin>>arr[k];// -3 5 -3 1
        }
        for(int k=0;k<n;k++)
        {
            int i=0,j=0,ix,jx;
            if(arr[k]>0)
            {
               i=arr[k];
               ix=k;
            }
            else if(arr[k]<0)
            {
                j=arr[k];//j=-3
                jx=k;//jx=0
            }
            else if(arr[k]==0)
            {
                continue;
            }
                            if(i!=0&&j!=0)
                                {
                            int x=0;
                            if(i>-j){x=-j;}
                            else if(i<-j){x=i;}
                            else if(i==-j){x=i;}
                            if(ix>jx){co+=x;}
                            arr[ix]=i-x;
                            arr[jx]=j+x;
                                }
                             else
                             {
                                 continue;
                             }

        }
        cout<<co;
    }
    return 0;
}
/*#include <iostream>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n],co=0;
        for(int k=0;k<n;k++)
        {
            cin>>arr[k];
        }
        for(int k=0;k<n;k++)
        {
            int i,j,ix,jx;
            if(arr[k]>0)
            {
               i=k;
            }
            else if(arr[k]<0)
            {
                j=k;
            }
            else if(arr[k]==0)
            {
                continue;
            }
                            int x=0;
                            if(arr[i]>-arr[j]){x=-arr[j];}
                            else if(arr[i]<-arr[j]){x=arr[i];}
                            else if(arr[i]==arr[j]){x=i;}
                            if(ix>jx){co+=x;}
                            arr[ix]=i-x;
                            arr[jx]=j+x;
        }
        cout<<co;
    }
    return 0;
}*/
