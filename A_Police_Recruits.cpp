#include<bits/stdc++.h>
using namespace std;
int main(){
    int c;cin>>c;
    int police=0,crime=0;
    int arr[c];
    for(int i =0;i<c;i++)cin>>arr[i];
    for(int i =0;i<c;i++){
       if(arr[i]==-1){
         if(police>0)police--;
         else crime++;
       }
       else police+=arr[i];
    }
    cout<<crime<<endl;
}