#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin>>tc;
    while(tc--)
    {
        int size,cnt1 = 0;
        string s;
        cin>>size>>s;
        string all;
        for(int i=0;i<size;i++)
        {
            all = s;
            if(all[i] == '1')
            {
                all[i]='0';
            }
            else if(all[i] == '0')
            {
                all[i]='1';
            }
            int cnt = std::count(all.begin(), all.end(), '1');
            cnt1+=cnt;
        }
        cout<<cnt1<<endl;
        
    }
    
    return 0;   
}