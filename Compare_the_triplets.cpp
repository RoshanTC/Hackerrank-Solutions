#include<iostream>
using namespace std;
int main() {
    int n[3],o[3],temp1=0,temp2=0;
    for(int i=0;i<3;i++){
    cin >>n[i];}
    for(int i=0;i<3;i++){
    cin >>o[i];}
    for(int i=0;i<3;i++){
        if(n[i]>o[i]) {temp1++;}
        if(n[i]<o[i]) {temp2++;}
        else {}
    }
    cout << temp1 << " "<<temp2;
    
    return 0;
}
