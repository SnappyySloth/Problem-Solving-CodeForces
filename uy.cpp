#include<bits/stdc++.h>
using namespace std;

long long int solved(long long int target) {
    return (3 ^ target) - 1;
}

int main() {
   int tc;std::cin>>tc;
   while(tc--){
       long long int n;
       std::cin>>n;
        long long int ansd = solved(n)+1 ;
       if(n%2==0){
          
           if(n/2==1)cout<<"YES"<<endl;
           else if(ansd == 1)cout<<"YES"<<" "<<ansd<<endl;
           else cout<<"NO"<<endl;
       }
       else {
          if(ansd == 1)cout<<"YES"<<" "<<ansd<<endl;
          else cout<<"NO"<<endl;
       }
       
   }
}