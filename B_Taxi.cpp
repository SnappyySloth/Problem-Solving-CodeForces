#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int a4=0,a3=0,a2=0,a1=0;
    for(int i =0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==4)a4++;
        else if(arr[i]==3)a3++;
        else if(arr[i]==2)a2++;
        else a1++;
<<<<<<< HEAD
    }   if(a3==2 && a2==1 && a4==0 &&a1==0)cout<<3;
        else if( (a4*4+a3*3+a2*2+a1)%4==0 )cout<<(a4*4+a3*3+a2*2+a1)/4<<endl;
        else cout<<(a4*4+a3*3+a2*2+a1)/4+1;
=======
    }
        // if( (a4*4+a3*3+a2*2+a1)%4==0 )cout<<(a4*4+a3*3+a2*2+a1)/4<<endl;
        // else cout<<(a4*4+a3*3+a2*2+a1)/4+1;
        

>>>>>>> master
}