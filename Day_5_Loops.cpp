/*Given an integer, n, print its first 10 multiples. Each multiple n*i (where 1<=i<=10) 
should be printed on a new line in the form: n x i = result.*/

#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){
    int N,mul;
    cin >> N;
    for(int i=1;i<11;i++){
        mul = N * i;
        cout << "" << N << " x " << i << " = " << mul << endl;
    }
    return 0;
}
