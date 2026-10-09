#include<iostream>
using namespace std;
int main(){
    int a[5][5], b[5][5], c[5][5];
    cout<<"Enter a Matrix of A:\n";
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>> a[i][j];
        }
    }
    cout<<"Enter a Matrix of B:\n";
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>> b[i][j];
        }
        cout<<endl;
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    cout<<"\nResultant Matrix:\n";
     for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
             cout<< c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}