#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int x,y;
        cin>>x>>y;
        int cnt=0;
        if(x==0&&y==0) cnt=0;
        else if(x==0)
        {
            if(y==1) cnt=1;
            else cnt=y/2+y%2;
        }
        else if(y==0)
        {
            while(x>0)
            {
                cnt++;
                x=x-15;
            }
        }
        else 
        { 
            if(x>11)
            {
                while(x>0)
                {
                    cnt++;
                    x=x-15;
                }
                    if(y<=2) cnt++;
                    else cnt=y/2+y%2;
            }
            else if(x<=7)
            {
            if(y<=2) cnt++;
            else cnt=y/2+y%2+1;
            }
        // else if(x==0 &&y==0) cnt=0;
            else 
            {  
            if(y==1) cnt++;
            else cnt=y/2+y%2+1;
            }
        } 
        cout<<cnt<<endl; 
    }
}