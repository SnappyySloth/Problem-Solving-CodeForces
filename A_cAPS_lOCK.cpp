#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    
    if(s[0]==tolower(s[0])){
        bool flag=0;
        for(int i =1;i<s.size();i++){
        int digit = s[i];
        if(digit>=97 && digit<=126){
            cout<<s<<endl;
            flag =1;
            break;
        }
      }
      if(flag==0){
        s[0]=toupper(s[0]);
        for( int i=1;i<s.size();i++){
           s[i]=tolower(s[i]);
        }
        cout<<s<<endl;
      }
    }else if(s[0]==toupper(s[0])){
        bool flag=0;
        for(int i =1;i<s.size();i++){
        int digit = s[i];
        if(digit>=97 && digit<=126){
            cout<<s<<endl;
            flag =1;
            break;
        }
      }
      if(flag==0){
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
        }cout<<s<<endl;
      }
    }

       
    }
    




