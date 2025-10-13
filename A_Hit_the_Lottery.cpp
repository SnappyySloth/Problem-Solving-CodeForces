#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cnt =0;
    while(n!=0){
        cnt+=n/100;
        int n1 =n%100;
        if(n1>=20){cnt+=n1/20;
    }
}