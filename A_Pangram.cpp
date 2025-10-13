#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,j=0,flag=0;
    cin>>n;
    string s;
    cin>>s;
    int a[200];
    for(int i=0;i<n;i++){
       int ask = tolower(s[i]);
       a[ask]=1;
    }
    for(int i='a';i<='z';i++){
       if(a[i]!=1) {cout<<"NO"<<endl;flag=1;break;}
    }
    if(flag==0) cout<<"YES"<<endl;
 
}