#include<bits/stdc++.h>
#define ll long long  
using namespace std;
int main(){
    ll tc;
    cin >> tc;
    while(tc--){
        ll n;
        cin >> n;
        ll arr[n];
        ll sum = 0 ;
        for(ll i = 0 ; i < n ; i++){
             cin>>arr[i];
             sum+=arr[i];
        } 
        ll p = pow(sum,0.5);
        if(p * p == sum )cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}