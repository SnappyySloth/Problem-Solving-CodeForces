#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][2];
    for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1];
    }
    int cnt =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j][1]==a[i][0])cnt++;
        }
    }
    cout<<cnt<<endl;
}
