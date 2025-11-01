#include<bits/stdc++.h>
using namespace std;
int main()
{
   long int tc;
   cin>>tc;
   while(tc--)
   {
      long int n,m;
      cin>>n>>m;

      int ind[m];

      string a,b;
      cin>>a;

      for(int i=0;i<m;i++)
      {     
        cin>>ind[i];
      }

      cin>>b;

      for(int i=0;i<m;i++)
      {
        a[ind[i]-1]=b[i];
      }
      cout<<a<<endl;

   }
}