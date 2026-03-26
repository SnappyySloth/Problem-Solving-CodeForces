#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        ll n;
        cin >> n;
        ll cnt =INT_MIN;
        ll arr[n];
        for(ll i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n);
        for(ll i=0;i<n;i+=2){
            if(abs(arr[i]-arr[i+1]>cnt))cnt=abs(arr[i]-arr[i+1]); 
        }cout<<cnt<<endl;

        
    }
}