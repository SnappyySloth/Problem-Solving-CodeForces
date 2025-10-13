#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    int ax[x];
    for(int i =0;i<x;i++)cin>>ax[i];
    int y;
    cin>>y;
    int ay[y];
    for(int i =0;i<y;i++)cin>>ay[i];
    // for(int i =0;i<x;i++)cout<<ax[i];
    // for(int i =0;i<y;i++)cout<<ay[i];
    if(x==0 && y==0) {
            cout<<"Oh, my keyboard!";return 0;
    }
    else{
        int arr[x+y];
    for(int i =0;i<x;i++)arr[i]=ax[i];
    for(int i =x;i<x+y;i++)arr[i]=ay[i-x];
    sort(arr,arr+(x+y));
    for(int i=0;i<(x+y)-1;i++){
        if(arr[(x+y)-1]!=n || arr[0]!=1){cout<<"Oh, my keyboard!";return 0;}
        if(arr[i]==arr[i+1] || arr[i]==arr[i+1]-1) continue;
        else {cout<<"Oh, my keyboard!";return 0;}
    }
    cout<<"I become the guy."<<endl;
    }

}