#include<bits/stdc++.h>
using namespace std;
int main(){

    int tc ;
    cin >> tc ;
    while(tc--){
        char arr [ 10 ] [ 10] ;
        int l1 = 0 ,l2 = 0, l3 = 0,l4 = 0 , l5 = 0;
        for(int i = 0 ; i < 10 ; i++){
            for(int j = 0 ; j < 10 ; j++){
                cin >> arr [i] [j];
                if( (i == 0  || i == 9)   && arr[i][j] =='X')l1++;

                else if( (i == 1  || i == 8) && arr[i][j] =='X'){
                    if(j == 0 || j == 9)l1++;
                    else l2++;
                }
                else if( (i == 2  || i == 7) && arr[i][j] =='X'){
                    if(j == 0 || j == 9)l1++;
                    else if(j == 1 || j == 8)l2++;
                    else l3++;
                }
                else if( (i == 3  || i == 6) && arr[i][j] =='X'){
                    if(j == 0 || j == 9)l1++;
                    else if(j == 1 || j == 8)l2++;
                    else if(j == 2 || j == 7)l3++;
                    else l4++;
                }
                else if( (i == 4  || i == 5 ) && arr[i][j] =='X'){
                    if(j == 0 || j == 9)l1++;
                    else if(j == 1 || j == 8)l2++;
                    else if(j == 2 || j == 7)l3++;
                    else if(j == 3 || j == 6)l4++;
                    else l5++;
                }
                
            }
        }   
        cout << l1 + l2 * 2 + l3 * 3 + l4 * 4 + l5 * 5 << endl; 
    }
}