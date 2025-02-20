#include<bits/stdc++.h>
using namespace std;
int main(){
int tc;
cin>>tc;
while(tc--)
{
    int n,sum=0;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(n%i==0) continue;
        else if(n%i!=0&&i%2!=0) sum=sum+i;
        else if (i==2 && n==3) sum+=i;
    }
    if(sum==0) cout<<-1;
    else cout<<sum<<endl;
}



}

