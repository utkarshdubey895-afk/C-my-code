#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter marks";
    cin>>n;
    if(n>81 and n<=100){
        cout<<"very good";
    }
    if(n>=61 and n<=80){
        cout<<"good";
    }
    if(n>=41 and n<=60){
        cout<<"Average";
    }
    if(n<=40){
        cout<<"fail";
    }
    
}