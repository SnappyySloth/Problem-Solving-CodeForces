#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin >>n;
        long long ans = 1;
        int cnt=0;
        while(true){
            if((ans*ans)%2==0){
                cout<<ans<<" ";
                cnt++;
            }
            ans++;
            if(cnt==n)break;
        }cout<<endl;
    }
}