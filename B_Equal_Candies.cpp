#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n ;
        cin >> n;
        long long min =INT_MAX;
        long long sum =0;;
        int arr[n];
        for(int i =0 ; i < n ; i++){
            cin>>arr[i];
            if(arr[i]<min)min=arr[i];
            sum+=arr[i];
        }
        cout<<(sum-n*min)<<endl;
    }
}