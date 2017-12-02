#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int n1[n];
    for(int i=1;i<=n;i++)
    {
        cin >> n1[i];
    }
    for(int i=n;i>=1;i--)
    {
        cout << n1[i] << " ";
    }
    return(0);
}
