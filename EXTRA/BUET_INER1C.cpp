#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,d,s=0;
        cin>>n>>d;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]>d)
                s=s+(arr[i]-d);
        }
        cout<<s<<endl;
    }


}
