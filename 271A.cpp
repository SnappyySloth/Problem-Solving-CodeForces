#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,flag=0;
    string n;
    cin>>n;
   int len = n.size();
   while(true)
   {
        for( i=0;i<len-1;i++)
        {
            for( j=i+1;j<len;j++)
            {
                if(n[i]==n[j])
                {
                   n+=1;
                   break;
                }
            }
        }
        if(i==(len-1) && j==len) break;
   }
   if(flag==1) cout<<n;
}