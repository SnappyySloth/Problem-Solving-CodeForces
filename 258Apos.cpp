#include<bits/stdc++.h>
using namespace std;

int main(){
int tc;
cin>>tc;
while(tc--){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==1)
                a[2][2]=a[i][j];
        }

    }




}
}
