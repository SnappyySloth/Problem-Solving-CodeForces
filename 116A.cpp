#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,max=0,max1=0,clt;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        clt=max-a+b;
     if(max1<=clt) max1=clt;
        max=clt;
    }
    cout<<max1;
    
    
}