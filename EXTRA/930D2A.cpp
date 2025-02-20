#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,s;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            a[i]=i+1;
        }
        for(int i=0; i<n; i++)
        {
            if(a[0]=1&&i+1==n) cout<<1;
            else if(a[i+1]>=2 && i+1<n-2)
            {
                swap(a[i+1],a[i+2]);
            }
            else if(i==n-1)
            {
                swap(a[n-1],a[0]);
            }
            for(int i=0; i<n; i++)
            {   cout<<a[i];
                if(a[i]==1);
                cout<<i<<endl;;
            }
        }
    }
}
