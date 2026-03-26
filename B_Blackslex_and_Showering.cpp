#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll tc;
    cin >> tc;
    while(tc--){
        ll n;
        cin >> n;
        vector<int>v;
        int max = -1;
        int ind =-1;
        for(int i = 0 ; i < n ; i++){
            int ele;cin>>ele;
            v.push_back(ele);
        }
        v.erase(v.begin()+ind);

    }
}