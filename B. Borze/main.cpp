#include <iostream>
#include <string>
using namespace std;

int main()
{
    string bo;
    cin>>bo;
    int i=0;
    while(i<bo.size())
    {
        switch(bo[i])
        {
          case'.':cout<<"0";
          i++;
          break;
          case'-':
                 if(bo[i]=='-'&&bo[i+1]=='.')
                {
                    cout<<"1";
                    i+=2;
                    break;
                }
                else if(bo[i]=='-'&&bo[i+1]=='-')
                {
                    cout<<"2";
                    i+=2;
                    break;
                }
         }
    }
    return 0;
}
