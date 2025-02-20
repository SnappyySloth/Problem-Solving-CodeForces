#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str;
   cin>>str;
   str+="1";
   int flag=0;
   while(flag==0)
   {
         for(int i=0;i<3;i++)
         {
             for(int j=i;j<4;j++)
             {
                  if(str[i]==str[j])
                  {
                     str+="1";
                     flag=0;
                    break;
                  }
                  else flag=1;
             }
         }
   }
   if(flag==1) cout<<str;
  
}
