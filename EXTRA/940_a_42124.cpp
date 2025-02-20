#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int arr[n];
        int brr[n]={0};
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        int c1=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {  
                
               if(arr[j]==c1) 
               {
                  brr[i]++;
               }
            }
            c1++;
        }
        for(int i=0;i<n;i++)
        {
            if(brr[i]>=3) cnt++;
        }
        cout<<cnt<<endl;
   }  
}