#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,4,7,9,12,16,20};
    int sum =0;
    for(int i=0; i<=5; i++){
        sum = sum + arr[i];
    }
    cout<<sum;
}