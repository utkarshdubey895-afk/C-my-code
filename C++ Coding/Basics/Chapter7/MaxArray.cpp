#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,4,7,9,12,46,55,66,87,99};
    int max =0;
    for(int i=1; i< 5; i++){
        max = max + arr[i];
    }
    cout<<max;
}