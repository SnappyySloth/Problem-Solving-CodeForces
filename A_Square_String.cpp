#include<iostream>
using namespace std;
int main(){
        int tc; cin>>tc;
        while(tc--){
                string n;
                cin>>n;
                if(n.size()%2!=0) cout<<"NO"<<endl;
                else{
                        int j=n.size()/2;
                        int f=0;
                        for(int i=0;i<n.size()/2;i++){
                           if(n[i]!= n[i+(n.size()/2)]){
                                   cout<<"NO"<<endl;
                                   f=1;
                                   break;
                                   }
                        }if(f==0)cout<<"YES"<<endl;
                }
        }
}