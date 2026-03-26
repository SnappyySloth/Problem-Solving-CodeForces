#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin>>n;
        int arr[n];
        bool flag =0;
        for(int i=0;i<n;i++)cin>>arr[i];
        for(int i=0;i<n-1;i++){
            int grow =arr[i];
            for(int j=i+1;j<n;j++){
                if(grow*arr[j]==67){
                    flag =1;
                     break;
                }grow*=arr[j];
            }
        }
        if(flag == 1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}