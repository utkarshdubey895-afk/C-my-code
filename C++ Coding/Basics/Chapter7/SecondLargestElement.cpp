#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {12,15,4,6,2,8};
    int mx = INT_MIN;
    for(int i=0; i<6; i++){
        mx = max(mx,arr[i]);
    }
    int smax = INT_MIN;
      for(int i=0; i<6; i++){
        if(arr[i]!=mx)smax = max(smax,arr[i]);
    }
    cout<<"Largest element ="<<mx <<endl;
    cout<<"Second element ="<<smax <<endl;
}