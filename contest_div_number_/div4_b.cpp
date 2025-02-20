#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,cnt=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        if(arr[0]==0) cnt++;
         int i=1;
        while(i!=n)
        {
            int sum=0;
            for(int j=0;j<i;j++)
            {
              sum=sum+arr[j];
            }
            for(int k=0;k<i;k++)
            {
                int temp=sum-arr[k];
                if(arr[k]==(temp)) cnt++;
            }
            i++;
        } cout<<cnt<<endl;
    }
}