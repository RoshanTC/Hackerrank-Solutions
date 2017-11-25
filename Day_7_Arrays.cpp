#include<iostream>

using namespace std;


int main(){
    int n,rev = 0;
    cin >> n;
    int p[n];    
    for(int i=0;i<n;i++){        
        cin >> p[i];		
}
if(n%2==0){
	for(int i=0;i<n/2;i++){
		int temp = p[n-1-i];
		p[n-1-i] = p[i];
		p[i] = temp;
	}
	for(int i=0;i<n;i++){
		cout << "" << p[i];
		cout << " ";
	}
}
else{
	for (int i=0;i<(n-1)/2;i++){
		int temp = p[n-1-i];
		p[n-1-i] = p[i];
		p[i] = temp;
	}
	for(int i=0;i<n;i++){
		cout << "" << p[i];
		cout << " ";
	}
}
}
