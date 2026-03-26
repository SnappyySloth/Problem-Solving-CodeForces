#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n, a, b;
        cin >> n >> a >> b;
        cout << min(n*a , (n/2)*b + (n%2)*a )<<endl;
    }
}