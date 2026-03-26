#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n ;
        cin >> n;
        string s;
        cin >> s;
        int first_b ,last_b =-1 , flag = 0;
        for(int i = 0 ; i < n ; i++ ){
             if(flag==0 && s[i]=='B'){
                flag = 1 ;
                first_b = i;
            }
            else if (s[i] == 'B') {
                last_b = i;
            }
        }
        
        if(last_b != -1)cout<<(last_b - first_b) + 1 << endl;
        else cout<< 1 << endl;
    }
}