#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;
        int len=s.size();
            if(len<=10)
            {
                cout<<s<<endl;
            }
            else if(len>10)
            {
                cout<<s[0]<<len-2<<s[len-1]<<endl;

            }

    }
}


