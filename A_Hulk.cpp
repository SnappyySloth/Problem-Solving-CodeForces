#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    bool flag=0;
    cin>>n;
    cout<<"I hate ";
    n--;
    while(n!=0){  
        cout<<"that ";
        if(flag==0){
            cout<<"I love ";
            flag=1;
        }
        else{
            cout<<"I hate ";
            flag=0;
        }
        n--;
    }
    cout<<"it";
    return 0;
}