#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int st1=1,st2=n;
    for(int i=1;i<=n;i++)
    {
        if(i<((n/2)+1))
        {
            for(int j=1;j<=n;j++)
            {
                if(j==st1) cout<<"\\";
                else if(j==st2) cout<<"/";
                else cout<<" ";
            }
        }
        else if(i>((n/2)+1))
        {
            for(int j=1;j<=n;j++)
            {
                
                if(j==st1) cout<<"/";
                else if(j==st2) cout<<"\\";
                else cout<<" ";
            }
        }
        else
        {
            for(int j=1;j<=n;j++)
            {
                if(j==st1 && st2==j) cout<<"X";
                else cout<<" ";
            }
        }

        if(i<((n/2)+1)) 
        {
          st1++;
          st2--;
        }
        else if(i>=((n/2)+1))
        {
            st1--;
            st2++;

        }
        cout<<"\n";
    }
    // Write your code here

    return 0;
}
