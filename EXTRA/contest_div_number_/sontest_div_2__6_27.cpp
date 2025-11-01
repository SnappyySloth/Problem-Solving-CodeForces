#include<bits/stdc++.h>
using namespace std;
    char findChar(string s1, string s2)
{
    int n1 = s1.length();
    int n2 = s2.length();
    int j,i;
    for (i = 0; i < n1; i++) {
        for ( j = 0; j < n2; j++) {
            if (s1[i] == s2[j]) {
                break;
            }
        }
        if (j == n2) {
            return s1[i];
        }
    }
    return s2[n2 - 1];
}
 
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s1,s2;
    cin>>s1>>s2;
    s1+=findChar(s1, s2);
    cout<<s1.size()<<endl;
    }
    return 0;
}
