#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,m,o,p,d,cnt=0;
    cin>>l>>m>>o>>p>>d;
    for(int i =1;i<=d;i++){
        if(i%l!=0 && i%m!=0 && i%o!=0 && i%p!=0)cnt++;
    }
    cout<<d-cnt;
}