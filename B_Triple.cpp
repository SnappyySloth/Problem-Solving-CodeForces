#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n ;
        cin >>n;
        int arr[n];
        for(int i = 0 ; i < n ; i++){
           cin >>arr[i];
        }
        if(n<3)cout<<-1<<endl;
        else {
        sort(arr,arr+n,greater<int>());
        bool flag =0;
        int ind ;
        for(int i=0;i<n;i++){
            if(i>=2 &&arr[i]==arr[i-1] && arr[i]==arr[i-2]){
                flag=1;
                ind =arr[i];
                break;
            }
        }
        if(flag == 0)cout<<-1<<endl;
        else cout<<ind<<endl;
        }
    }
}