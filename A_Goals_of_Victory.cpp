#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int num;
        cin >> num;
        int cnt = 0 ;
        for(int i = 1 ; i <= num - 1 ; i++){
            int x;
            cin >> x;
            cnt+=x;
        }
        cout<<0-cnt<<endl;
    }
}