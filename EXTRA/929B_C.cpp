
#include<bits/stdc++.h>
using namespace std;
int main()
{
int tc;
cin>>tc;
while(tc--)
    {
    int n,a[50],sum=0,digit=0;
    cin>>n;
    for(int i=0;i<n;i++) {cin>>a[i];}
    for(int i=0;i<n;i++){ sum=sum+a[i];}
        for(int i=n-1;i<=0;i--)
    {
        if(sum%3!=0&&sum>3)
        {
            a[i]=a[i]*0;
            digit++;
        }
        else digit--;

    }
     cout<<digit<<endl;
    }

}
