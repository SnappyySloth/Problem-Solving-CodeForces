
#include<bits/stdc++.h>
using namespace std;
int main()
{
int tc,Count=0;
cin>>tc;
while(tc--){
int a,b,c;
cin>>a>>b>>c;
if(c>2 && b<=2) Count=a+b;
else if(b>c) Count=-1;
cout<<Count<<endl;;
}

}
