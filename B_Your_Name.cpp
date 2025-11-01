#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        string s,a;
        cin>>s>>a;
         sort(s.begin(), s.end()); 
         sort(a.begin(), a.end());
         if(s==a)cout<<"YES"<<endl;
         else cout<<"NO"<<endl; 
      
    }
}