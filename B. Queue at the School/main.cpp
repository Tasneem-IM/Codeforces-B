#include <iostream>
using namespace std;
int main() {
    int n,t;
    cin>>n>>t;
    char arr1[n],arr2[n];
    for (int a=0;a<n;a++)
        {
        cin>>arr1[a];
        }
    for (int a=0;a<n;a++)
        {
        arr2[a]=arr1[a];
        }
    while (t != 0)
        {
        for (int i=0;i<n;i++)
        {
            if (arr1[i]=='B'&&arr1[i+1]=='G')
            {
                arr2[i]='G';
                arr2[i+1]='B';
            }
        }
        t--;
        for (int a=0;a<n;a++)
        {
            arr1[a]=arr2[a];
        }
    }
    for (int b=0;b<n;b++)
    {
        cout<<arr2[b];
    }
    return 0;
}
