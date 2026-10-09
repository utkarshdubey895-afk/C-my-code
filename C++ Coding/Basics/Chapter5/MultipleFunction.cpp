#include<iostream>
using namespace std;
void usa(){
    cout<<"you are in USA"<<endl;
    return;
}
void India(){
    cout<<"you are in india"<<endl;
    usa();
}
int main (){
    cout<<"you are in main"<<endl;
    India();
    return 0;

}