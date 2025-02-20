#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str;
   cin>>str;
   int flag=0;
   int len=str.size();
   for(int i=0;i<len;i++)
   {
       if(str[i]=='4'||str[i]=='7') flag=1;
       else {flag=0;break;}
   }
   if(flag==1) cout<<"YES";   
   else cout<<"NO";
}