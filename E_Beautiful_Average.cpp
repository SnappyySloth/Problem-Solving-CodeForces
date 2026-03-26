#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;cin>>tc;
    while(tc--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int max = -1;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int max_1 = (arr[i]+arr[j])/2;
                if(max_1>max)max =max_1;
            }
        }cout<<max<<endl;

    }
}