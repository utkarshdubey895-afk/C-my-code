#include<iostream>
using namespace std;
int main(){
    int arr[4][2] = {{11,88},{12,87},{13,78},{14,90}};
    cout<<"Enter a Roll number:"<<endl;
    cout<<"Enter a Marks:";
    for(int i=1; i<4;i++){
        for(int j=1; j<=2; j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
       for(int i=1; i<4;i++){
        for(int j=1; j<=2; j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}