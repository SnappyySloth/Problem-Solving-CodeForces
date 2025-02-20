
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,digit=0;
cin>>n;
while(n--){
int p,v,t;
cin>>p>>v>>t;
if(p==1&&v==1) digit++;
else if(p==1&&t==1) digit++;
else if(v==1&&t==1) digit++;

}
cout<<digit<<endl;
return 0;
}
