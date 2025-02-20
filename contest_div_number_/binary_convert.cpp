#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i=1;
    cin>>tc;
    while(tc--)
    {
        int n,cnt=0;
        cin>>n;
        vector<int> v;
        while(n>0)
        {
            v.push_back(n%2);
            n=n/2;
        }
        for(int i=0;i<v.size();i++)
        {
           if(v[i]==1) cnt++;
        }
       if(cnt%2==0) cout<<"Case"<<" "<<i<<":"<<" "<<"even"<<endl;
       else cout<<"Case"<<" "<<i<<":"<<" "<<"odd"<<endl;
       i++;
    }
}