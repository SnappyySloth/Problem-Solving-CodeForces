#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;
 
int32_t main()
{
    fastIO;
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int carry=sqrt(n);
        if(carry*carry != n){
            cout<<-1<<endl;
        }
        else{
            if(carry%2!=0){
                cout<<carry/2<<" "<<(carry/2)+1<<endl;
            }
            else cout<<carry/2<<" "<<carry/2<<endl;
        } 
    }

    
    return 0;
}