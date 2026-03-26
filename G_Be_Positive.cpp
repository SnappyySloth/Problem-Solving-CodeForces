#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        int cnt =0;
        int mult=1;
        for(int i =0;i<n;i++){
            int an ;
            cin >> an;
            if(an==0){
                cnt++;
                mult*=1;
            }else mult*=an;
        }
        if(mult<0)cnt+=2;
        cout<<cnt<<endl;
    }
}