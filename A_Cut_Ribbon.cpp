#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,a,b,c;
  cin>>n>>a>>b>>c;
  int arr[3];arr[0]=a;arr[1]=b;arr[2]=c;
  sort(arr,arr+3);
  int cnt=0;
  while(n!=0){
    if(n>arr[2]){
        cnt++;
        n-=arr[2];
    }
    else if(n>arr[1]){
        cnt++;
        n-=arr[1];
    }
    else if(n>arr[0]){
        cnt++;
        n-=arr[0];
    }
    else break;
  }cout<<cnt<<endl;
}
  