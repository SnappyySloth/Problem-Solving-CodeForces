#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        ll k;
        cin>>n>>k;
        int arr[n],brr[n],pre[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        pre[0] = arr[0]; 
        for(int i=1;i<n;i++)
        {
            pre[i]=pre[i-1]+arr[i];
            if(pre[i]>k) break;
            
        }
        ll min = INT_MAX;

        for(int i=0;i<sizeof(pre)/4;i++)
        {
           if ((brr[i]=k-pre[i])>=0) brr[i]=k-pre[i];
            if(min>brr[i] ) min =brr[i];
        }
        for(int i=0;i<sizeof(pre)/4;i++)
        {
            cout<<brr[i]<<" ";
            
        }
        cout<<min<<endl;

    }
}