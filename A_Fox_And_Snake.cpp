#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;cin>>a>>b;
    bool flag=0;
    for(int i =1;i<=a;i++){
            if(i%2!=0){
                for(int k=1;k<=b;k++){
                   cout<<'#'; 
                }cout<<endl;
            }
            else{
                if(flag==0){
                for(int k=1;k<=b;k++){
                    if(k==b)cout<<'#';
                    else cout<<'.'; 
                }cout<<endl;
                flag=1;
                }
                else if(flag==1){
                for(int k=1;k<=b;k++){
                    if(k==1)cout<<'#';
                    else cout<<'.'; 
                }cout<<endl;
                flag=0;
                }
            }
    }
}