#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,5,6,8};
    int min = 0;
    for(int i=1; i<=5; i++){
        min = min + arr[i];
    }
    cout<<min;
}