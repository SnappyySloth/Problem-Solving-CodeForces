#include<bits/stdc++.h>
using namespace std;
int main()
{
     long double a,b,n;
    cin>>a>>b>>n;
    
    long long ans=ceil(a/n)*ceil(b/n);
    long long inf = (long long)ans;
    cout<<inf;
}