#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,cnt = 0;
        cin>>n;
        string str;
        cin>>str;
        for(int i = 0; i < n ; i++)
        {
            if(str[i] == 'B')
            {
                cnt++;
                int j;
                if(str[i+1]=='W')
                {
                    for(j=i+1;j<n;j++)
                    {
                        if(str[j+1]=='B')
                    {
                        cnt++;
                        j=n-1;
                        i++;
                    }
                    }

                }
            }
        }
        cout<<cnt<<endl;

    }
}
