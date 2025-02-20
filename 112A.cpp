#include<bits/stdc++.h>
using namespace std;
int main()
{
     string a;
     string b;
     int digit=0;
     cin>>a;
     cin>>b;

     int res=a.size();
     for(int i=0;i<res;i++)
     {
        a[i]=tolower(a[i]); 
        b[i]=tolower(b[i]);
     }
     if(a==b) cout<<0<<endl;
     else
     {
      for(int i=0;i<res;i++)
      {
         if(a[i]>b[i])
         {
            cout<<1<<endl;
            break;
         }
         if(a[i]<b[i])
         {
            cout<<-1<<endl;
            break;
         }
      }
     }
    return 0;
} 