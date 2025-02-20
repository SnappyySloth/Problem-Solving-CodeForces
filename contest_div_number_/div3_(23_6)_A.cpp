#include<bits/stdc++.h>
using namespace std;
int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  { 
    int a,b,c;
    cin>>a>>b>>c;
    int min_i=INT_MAX;
    if(min_i>abs(a-b)+abs(a-c)) min_i=abs(a-b)+abs(a-c); 
     if(min_i>abs(b-a)+abs(b-c)) min_i=abs(b-a)+abs(b-c);
      if(min_i>abs(c-a)+abs(c-b)) min_i=abs(c-a)+abs(c-b); 
    cout<<min_i<<endl;
  }
}