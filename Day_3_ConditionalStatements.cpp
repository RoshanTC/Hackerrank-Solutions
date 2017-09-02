/*Given an integer, n, perform the following conditional actions:
If n is odd, print Weird
If n is even and in the inclusive range of 2 to 5, print Not Weird
If n is even and in the inclusive range of 6 to 20, print Weird
If n is even and greater than 20, print Not Weird*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int N;
    cin >> N;
    if(N<=20 &&  N>=6 && N%2 == 0){
        cout << "Weird";
    }
    
    else if(N>=2 && N<= 5 && N%2 ==0){
        cout << "Not Weird";
    }
    
    else if(N>20 && N<= 100 && N%2 ==0){
        cout << "Not Weird";
    }
    
    else{
        cout <<"Weird";
    }
    
    
    return 0;
}
