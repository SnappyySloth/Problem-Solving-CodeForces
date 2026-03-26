#include<bits/stdc++.h>
using namespace std;
<<<<<<< HEAD
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
  
=======
int  main(){
    int n , a[3];
    cin >> n >> a[0] >> a[1] >> a[2];
    sort(a,a+3);
    int max =0;
    if(n%a[0]== a[0] ||n%a[0]== a[1] ||n%a[0]== a[2]  ){
       if(n/a[0]+1 > max)max=n/a[0]+1;
    }if(n%a[0] == 0){
        if(n/a[0] > max)max=n/a[0];
    }
    if(n%a[1]== a[0] ||n%a[1]== a[1] ||n%a[1]== a[2]  ){
       if(n/a[1] > max)max=n/a[1]+1;
    }if(n%a[1] == 0){if(n/a[1] > max)max=n/a[1];}
 
    if(n%a[2]== a[0] ||n%a[2]== a[1] ||n%a[2]== a[2]  ){
       if(n/a[2]+1> max)max=n/a[2]+1;
    }if(n%a[2] == 0){if(n/a[2] > max)max=n/a[0];}
    cout<<max<<endl;
}
>>>>>>> master
