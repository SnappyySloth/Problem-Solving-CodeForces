#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;
int main()
{
  string str;
  cin>>str;
  int sml=0,big=0;
  int len=str.size();
  for(int i=0;i<len;i++)
  {
      if(str[i]>='a') sml++;
      else big++;
  }
  if(sml>=big)
   {
       for(int i=0;i<len;i++)
       {
        str[i]=tolower(str[i]);
       }
   } 
  else
   {
        for(int i=0;i<len;i++)
        { 
        str[i]=toupper(str[i]);
        }
   }
   cout<<str;
}