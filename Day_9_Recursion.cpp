#include<iostream>
using namespace std;

using namespace std;

int factorial(int n)
{
 int ans;
 if(n == 1) return 1 ; 
 else ans = n * factorial(n-1) ; 
 return ans;
}

int main()
 { int n, answ;
  cin >> n; 
  answ = factorial(n); 
  cout << answ; 
  return 0; 
  }
