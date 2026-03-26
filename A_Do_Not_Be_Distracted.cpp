#include<bits/stdc++.h>
using namespace std;
int  main(){
    int tc;
    cin >> tc;
    while (tc--){
        int n;
        cin >> n;
        char arr[n];
        vector <int> v;
        for(int i = 0  ;i < n ; i++){
            cin>>arr[i];
            if(i==0)v.push_back(arr[i]);
            else{
                if(arr[i-1] != arr[i])v.push_back(arr[i]);
            }
        }
        int flg =0;
        for(int i=0;i<v.size();i++){
           for(int j=i+1;j<v.size();j++){
               if(v[i]==v[j]){
                flg= 1;
                break;
               }
           }   
        }
        if(flg == 1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}