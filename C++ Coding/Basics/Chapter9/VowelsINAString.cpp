#include<iostream>
using namespace std;
int main() {
    string s = "col is an animal with for legs";
    int cout = 0;
    for(int i=0; i<s.length();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            cout<< i++;

        }
    }
    cout<<cout;

}