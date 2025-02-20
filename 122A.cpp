#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n;
      cin>>n;
      while()
      int flag=0;

       if(n%4==0||n%7==0) cout<<"YES"<<endl;
       else
         {
            while(n>0)
            {
                 if( n%10==4 || n%10==7 ) {n=n/10;}
                 else {flag=1;break;}
            }
            if(flag==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
         }
      
}