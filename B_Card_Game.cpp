#include<bits/stdc++.h>
using namespace std ;
int main(){
    int tc ;
    cin >> tc;
    while ( tc-- ){
        int a1 , a2 , b1 , b2;
        cin >> a1 >> a2 >> b1 >> b2;
        int cnt = 0 ;
        if ( a1 > b1 && a2 > b2 ) cnt++;
        else if ( a1 > b1 && a2 == b2) cnt++;
        else if ( a1 == b1 && a2 > b2) cnt++;

        if ( a1 > b2 && a2 > b1 ) cnt++;
        else if ( a1 > b2 && a2 == b1 ) cnt++;
        if ( a1 == b2 && a2 > b1 ) cnt++;

        if ( a2 > b1 && a1 > b2 ) cnt++;
        else if ( a2 > b1 && a1 == b2 ) cnt++;
        else if ( a2 == b1 && a1 > b2 ) cnt++;

        if ( a2 > b2 && a1 > b1 ) cnt++;
        else if ( a2 > b2 && a1 == b1 ) cnt++;
        else if ( a2 == b2 && a1 > b1 ) cnt++;

        
        
       


        cout<<cnt<<endl;
    }
}