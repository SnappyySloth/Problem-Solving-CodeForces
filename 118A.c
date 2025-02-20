#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    char str1[101];
    scanf("%s",str1);
    int len=strlen(str1);
    for(int i=0;i<len;i++)
    { 
        if(str1[i]!='A'&&str1[i]!='O'&&str1[i]!='Y'&&str1[i]!='E'&&str1[i]!='U'&&str1[i]!='I'&&
        str1[i]!='a'&&str1[i]!='o'&&str1[i]!='y'&&str1[i]!='e'&&str1[i]!='u'&&str1[i]!='i')
        {
           printf(".%c",tolower(str1[i]));
        } 
    }
}
    