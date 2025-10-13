#include<bits/stdc++.h>>
using namespace std;
int main(){
   int n,cnt=0,flag=0;
   cin>>n;
   int arr[n],brr[n];
      for(int i=0;i<n;i++){
         cin>>arr[i];
      } 
   sort(arr,arr+n,greater<int>());
   if(n==1)cout<<1;
   else if(n==2){
      if(arr[0]>arr[1] )cout<<1<<endl;
      else cout<<2<<endl;
   }
   else{
      brr[0]=arr[0];
      for(int i=1;i<n;i++){
         brr[i]=brr[i-1]+arr[i];
      } 
      for(int i=0;i<n-1;i++){
         cnt++;
      if(brr[n-1]-brr[i] < brr[i]) {cout<<cnt<<endl;break;}
   }
   }    
}