#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str;
   cin>>str;
   int len=str.size();
   cout<<len;
   int k=0;
   for(int i=0;i<len-1;i++)
   {
       if(k==6) break;
       else if(str[i]==str[i+1]) k++;
       else k=0;
   }
   if(k>=6) cout<<"YES";
   else cout<<"NO";
}