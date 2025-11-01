#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;cin>>tc;
    while(tc--){
        int a,b,c;cin>>a>>b>>c;
        if(a>=b && b>=c||a<=b && b<=c) cout<<b<<endl;
        else if(b>=a && a>=c||b<=a && a<=c)cout<<a<<endl; 
        else cout<<c<<endl;       
    }
}