#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;cin>>tc;
    while(tc--){
        string s;cin>>s;
        int f1 = s[0]-'0';
        int f2 = s[1]-'0';
        int f3 = s[2]-'0';
        int f4 = s[3]-'0';
        int f5 = s[4]-'0';
        int f6 = s[5]-'0';
        // cout<<f1<<f2<<f3<<f4<<f5<<f6<<endl;
        if(f1+f2+f3==f4+f5+f6)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}