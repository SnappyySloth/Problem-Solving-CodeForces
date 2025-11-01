#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;cin>>tc;
    while(tc--){
        int h1=0;
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        for(int i =0;i<n-1;i++){
           for(int j=i+1;j<n;j++){
            if( (arr[i]+arr[j])/2>h1)h1=(arr[i]+arr[j])/2;
           }
        }
        cout<<h1<<endl;
            // if(arr[i]>h1)h1=arr[i];
            // else if(arr[i]<=h1 && arr[i]>h2)h2=arr[i];
        // if((h1+h2)%2==0) cout<<(h1+h2)/2<<endl;
        // else cout<<((h1+h2)/2)+1<<endl;

    }
}