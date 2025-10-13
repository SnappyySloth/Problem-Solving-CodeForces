#include<bits/stdc++.h>
using namespace std;
int main(){
    long long arr[4],cnt=0;
    for(int i = 0;i<4;i++){
       cin>>arr[i];
    }
    if(arr[0]==arr[1] || arr[0]==arr[2]||arr[0]==arr[3])cnt++;
    if(arr[1]==arr[2] || arr[1]==arr[3])cnt++;
    if(arr[2]==arr[3])cnt++;
    cout<<cnt;
}