#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int cnt=0;
    while(tc--)
    {
        int x,y;
        cin>>x>>y;
         if(x>11)
        {
                while(x>0)
                {
                    cnt++;
                    x=x-15;
                }
            if(y==1) cnt++;
            else cnt=y/2+y%2;
        }
        else if(x<=7)
        {
            if(y<=2) cnt=1;
            else cnt=y/2+y%2;
        }
        // else if(x==0 &&y==0) cnt=0;
        else
        {
            if(y<=1) cnt=1;
            else cnt=y/2+y%2;
        }
        cout<<cnt<<endl;
        cnt=0;
    }
        
    }  
        
    
    
    
