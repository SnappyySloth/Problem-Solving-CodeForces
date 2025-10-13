#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    int a1,a2,a3,a4;
            cin>>a>>b>>c;
    a1=(a+b)*c;
       a2=a*(b+c);
          a3= a+b+c;
             a4= a*b*c;
             if(a1>=a2 &&a1>=a3 && a1>=a4)cout<<a1;
             else  if(a2>=a1 &&a2>=a3 && a2>=a4)cout<<a2;
             else  if(a3>=a2 &&a3>=a1 && a3>=a4)cout<<a3;
             else cout<<a4;
}