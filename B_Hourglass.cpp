#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tc;
    cin >>tc;
    while(tc--){
       ll s,k,m;
       cin >> s >> k >> m;
       if(s==k){
         if(s==m)cout<<s<<endl;
         else if(s>m)cout<<k-m<<endl;
         else cout<<s-(m%s)<<endl;
       }
       else if(s<k){
        if(m%k==0)cout<<s<<endl;
        else {
            if(s-(m%k)>=0)cout<<s-(m%k)<<endl;
            else cout<<0<<endl;
        }
       }
       else{
        if(k>m)cout<<s-m<<endl;
        else if(k==m)cout<<m<<endl;
        else {
            if((m/k)%2==0)cout<<s-(s%(m/k))<<endl;
            else if(m/k==1)cout<<k-(m-k)<<endl;
            else cout<<k-(m%(m/k))<<endl;
        }

       }
    }
}