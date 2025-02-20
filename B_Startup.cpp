#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 int main()
{
    ll tc;
   cin>>tc;
   while(tc--)
   {
     long long  int n,k;
     cin>>n>>k;
    map<ll,ll> m;
    ll max= INT_MIN;
     for(ll i=0;i<k;i++)
     {
        ll a,b;
        cin>>a>>b;
        if(a>max) max=a;
        m[a]+=b;
     }
      ll count=n,r_max=max,j=1,result=0;
     while(max--)
     {
        if(j <= count && j)
        {
            result+=m[j];
            count--;
            j++;
        }
     }
     cout<<result<<endl;
   }
}