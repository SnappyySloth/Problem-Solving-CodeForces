#include<bits/stdc++.h>
using namespace std;
int main()
{
int tc,Count=0;
cin>>tc;
while(tc--){
int a,b,c;
cin>>a>>b>>c;
if(b>c&&((b%3)+c)<3) Count=-1;
else if((b+c)%3==0) Count=a+(b+c)/3;
else if(b<c &&(b+c)>=3) Count=a+(b+c)/2+c%3;
else if(b>c &&((b%3)+c)>3) Count=a+(c+b)/3+(c+b)%3;
 else if(b==0&&c==0) Count=a;
else if(b+c<3) Count=-1;
cout<<Count<<endl;
}

}
