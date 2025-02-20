#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;
        ll q;
        cin>>q;
        for(int i=0;i<q;i++)
        {
            ll a,b;
            cin>>a>>b;
            s[a-1]=b;
            if(s.size()<4) cout<<"NO"<<endl;
            else
            {
                bool correct=false;
                for(int j=0;j<s.size()-3;j++)
                {
                    if(s[j]=='1' && s[j+1]=='1' && s[j+2]=='0'&&s[j+3]=='0')
                    {
                        correct=true;
                        break;
                    }
                }  
                if(correct==true) cout<<"YES"<<endl; 
                else cout<<"NO"<<endl; 
                
            }
        }
        cout<<endl;
    }
    return 0;   
}