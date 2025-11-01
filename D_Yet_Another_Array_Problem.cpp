#include<bits/stdc++.h>
using namespace std;


int gcd_1(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd_1(b, a % b);
}
int main(){
    int tc;cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int arr[n];

        int small;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i==0){
                small=arr[0];
            }else{
                if(arr[i]<small)small=arr[i];
            }
        }
        int gc=-1;
       for(int i=2;i<=small;i++){
        for(int j=0;j<n;j++){
            if(gcd_1(i,arr[j])==1){cout<<i<<endl;gc=i;break;}
        }
       }
       if(gc==-1)cout<<-1<<endl;
    }
}