#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int arr[n];
        int cnt=0;
        for(int i =0;i<n;i++){
           cin>>arr[i];
           if(arr[i]%2==0)cnt++;
        } 
        if(cnt==n || cnt==0) {
           for(int i =0;i<n;i++) cout<<arr[i]<<" ";
           cout<<endl;
        }
        else {sort(arr,arr+n);
            for(int i =0;i<n;i++) cout<<arr[i]<<" ";
           cout<<endl;
         }
      
    }
}