
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cnt =0,s,h;
    for(int i=0;i<n;i++){
        int t;cin>>t;
        if(i==0){
          s=t;h=t;
        }
       else if(h<t){cnt++;h=t;}
       else if(s>t){cnt++;s=t;}
    }
    cout<<cnt;
}