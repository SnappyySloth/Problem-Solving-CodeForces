#include<bits/stdc++.h>
using namespace std;
int  main(){
    int n , a[3];
    cin >> n >> a[0] >> a[1] >> a[2];
    sort(a,a+3);
    int max =0;
    if(n%a[0]== a[0] ||n%a[0]== a[1] ||n%a[0]== a[2]  ){
       if(n/a[0]+1 > max)max=n/a[0]+1;
    }if(n%a[0] == 0){
        if(n/a[0] > max)max=n/a[0];
    }
    if(n%a[1]== a[0] ||n%a[1]== a[1] ||n%a[1]== a[2]  ){
       if(n/a[1] > max)max=n/a[1]+1;
    }if(n%a[1] == 0){if(n/a[1] > max)max=n/a[1];}
 
    if(n%a[2]== a[0] ||n%a[2]== a[1] ||n%a[2]== a[2]  ){
       if(n/a[2]+1> max)max=n/a[2]+1;
    }if(n%a[2] == 0){if(n/a[2] > max)max=n/a[0];}
    cout<<max<<endl;
}