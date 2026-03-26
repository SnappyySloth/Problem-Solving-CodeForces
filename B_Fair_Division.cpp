#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        int arr [n];
        int cnt1 = 0 ,cnt2 = 0 , cnt = 0;
        for( int i = 0 ; i < n ; i++ ){
            cin >> arr[i];
            if( arr[i] == 1)cnt1++;
            else if( arr[i] == 2)cnt2++;
            cnt+=arr[i];
        }
         if(cnt % 2 != 0)cout<<"NO"<<endl;
         else if( cnt2==0){
            if(cnt1/2 ==  cnt/2)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
         }
         else if( cnt1==0){
            if((cnt/2 %2==0))cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
         }
         else {
            if(cnt1*1==n/2)cout<<"YES"<<endl;
            else if(cnt2*2==n/2)cout<<"YES"<<endl;
            else {
                int c1 = (cnt/2);
                if(c1 /2 <=cnt2 && c1%2 <=cnt1 )cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
                
            }
         }            
    }
}