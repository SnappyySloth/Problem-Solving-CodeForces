#include<bits/stdc++.h>
#define Max 3
using namespace std;
int a[Max];
int point=-1;
int  isfull(){
if(point==Max)
    return 1;
else return 0;
}
int isempty(){

if(point==-1) return 1;
else return 0;
}

void push(int data){
if(isfull()) cout<<"stack over flow"<<endl;
else
    point+=1;
    a[point]=data;

}
int pop(){
int value;
if(isempty()) cout<<"stack underflow"<<endl;
else
    value=a[point];
    point-=1;
return value;

}
int main()
{
    int data;
    push(1);
    push(10);
    push(4);
    data=pop();

for(int i=0;i<=point;i++){

    cout<<a[i]<<" ";
}


}
