#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin >>tc;
    while(tc--){
        long long n;
        cin >> n;
        int num = n;
        int cnt = 0;
        int got =num%10;
        bool flag =0;
        while(num!=0){
           cnt++;
           if(n%10!=got)flag=1;
           num/=10;

        }

        if(cnt == 1)cout<<n<<endl;
        else if(flag)
    }
}