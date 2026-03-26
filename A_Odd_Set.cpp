#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        int arr[n*2];
        int ev = 0, od = 0;
        for(int i = 0 ; i < n*2 ; i++){
            cin >> arr[i];
            if(arr[i]%2==0)od++;
            else if(arr[i]%2!=0)ev++;
        }
        
        if(od == ev)cout << "Yes"<<endl;
        else cout << "No"<<endl;

    }
}