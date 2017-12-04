#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int Factorial(int n)
{
    if(n>=1)
    {
       return n*Factorial(n-1);
    }
    else
    {
        return 1;
    }
    
}
int main() {
   int n,i=0,fact=0;
    cin >> n;
    cout << Factorial(n);
    return 0;
}
