#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;cin>>tc;
    while(tc--){
        int n;cin>>n;
        string s;cin>>s;
        if(n==5){
           sort(s.begin(),s.end());
           if(s[0]=='T'&&s[1]=='i'&&s[2]=='m'&&s[3]=='r'&&s[4]=='u')cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
        }else cout<<"NO"<<endl;
    }
}