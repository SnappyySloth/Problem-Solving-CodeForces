#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,sum=0,a[50];
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]<a[i+1]&&i==n-2)
            {
                swap(a[i],a[i+1]);
            }
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]<0) a[i]=-a[i];
        }
         for(int i=0; i<n; i++)
        {
            sum=sum+a[i];
        }
        cout<<sum<<endl;
    }
}
