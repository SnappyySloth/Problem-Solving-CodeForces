#include<iostream>
using namespace std;
int main()
{
    int n,t=0,b=0,c=0,d=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {

        if(a[i]%2==0||a[i]==0)
        {
          t++;
        }
    }

    for(int i=0; i<n; i++)
    {

        if(a[i]%2!=0)
        {
            b++;
        }
    }
    for(int i=0; i<n; i++)
    {

        if(a[i]>0)
        {
            c++;
        }
    }
    for(int i=0; i<n; i++)
    {

        if(a[i]<0)
        {
            d++;
        }
    }
    cout<<"Even:";
    cout<<t<<endl;
    cout<<"Odd:";
    cout<<b<<endl;
    cout<<"Positive:";
    cout<<c<<endl;
    cout<<"Negetive:";
    cout<<d<<endl;
}
