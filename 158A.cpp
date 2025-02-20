#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,digit=0;
    cin>> n >> k ;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]>=a[k-1] && a[i]>0 ) digit++;
    }
    cout<<digit;
}
