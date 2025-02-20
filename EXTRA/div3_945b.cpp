#include<bits/stdc++.h>
using namespace std;
void sortString(string &str)
{
   std::sort(str.begin(), str.end());
}
int main()
{
    long int tc;
    cin>>tc;
    while(tc--)
    {
        long int n;
        cin>>n;
    string s;
    cin>>s; 
    //sortString(s); 
    int j=n-1;
    for(int i=0;i<=n/2;i++)
    {
        swap(s[i],s[j]);
        j--;
    }
    cout<<s;
    return 0;
    
    }
}