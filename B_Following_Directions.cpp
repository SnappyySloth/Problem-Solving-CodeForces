#include<bits/stdc++.h>
using namespace std;
int  main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ind_x = 0,ind_y = 0;
        bool flag  = 0;
        for(int i = 0 ; i < n; i++){
            if(s[i]=='U')ind_x++;
            else if(s[i]=='D')ind_x--;
            else if(s[i]=='R')ind_y++;
            else if(s[i]=='L')ind_y--;

            if( ind_x == 1 && ind_y == 1){
                flag = 1;
                break;
            }
        }
        if(flag==0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
}