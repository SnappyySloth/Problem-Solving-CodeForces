#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[3];cin>>arr[0];cin>>arr[1];cin>>arr[2];
  sort(arr,arr+3);
  cout<<abs(arr[2]-arr[1])+abs(arr[0]-arr[1]);
}