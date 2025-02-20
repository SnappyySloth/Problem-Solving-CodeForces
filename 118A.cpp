#include<bits/stdc++.h>
using namespace
int main()
{
    string str1[101];
    //scanf("%s",str1);
    cin>>str1[101];
    string str2[101];
    int j=0;
    int len=str1.size();
    for(int i=0;i<len;i++)
    { 
        if(str1[i]!='A'&&str1[i]!='O'&&str1[i]!='Y'&&str1[i]!='E'&&str1[i]!='U'&&str1[i]!='I'&&
        str1[i]!='a'&&str1[i]!='o'&&str1[i]!='y'&&str1[i]!='e'&&str1[i]!='u'&&str1[i]!='i')
        {
            str2[j]='.';
            str2[j+1]=tolower(str1[i]);
            j=j+2;
        } 
    }
    
    //printf("%s\n",str2);
    cout<<str2<<endl;
}

