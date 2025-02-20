#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a[] = {12,13,14,14,15,16,12};
    int n = 7;
    cout<< "before the sort" <<endl;
    for(int i=0;i<=n-1;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"after sort"<<endl;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1])
            {
              int temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
            }
        }

    }
    for(int i=0;i<=n-1;i++)
    {
        cout<<a[i]<<" ";
    }


}
