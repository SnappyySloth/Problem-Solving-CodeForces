#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,d;
    cin>>n>>d;
    long int arr[n];
     long int count=0;
    for(long int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    for(long int i=0;i<n;i++)
    {
        for(long int j=0;j<n;j++)
        {
            if(abs(arr[i]-arr[j])<=d&& i!=j) count++;
        }
    }
    cout<<count;
}