
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,cnt=0;
        cin>>n;
        string str;
        cin>>str;
        int i=0;
        for(int i=0;i<n;i++)
        {
                if(str[i]=='@') cnt++;
                else if(str[i]=='.') continue;
                else if(str[i]=='*')
                {
                    if(str[i+1]=='*'&& i+1<=n-1) break;
                }

            else break;

        }

        cout<<cnt<<endl;
    }
}
