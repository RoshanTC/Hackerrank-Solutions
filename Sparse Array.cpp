#include <iostream>

using namespace std;

int main()
{
    long int N;
    cout << "Enter number of Strings:\n";
    cin >> N;
    cout << "Number of Strings:\n";
    string entries[1000];
    for(long int i=0;i<N;i++)
    {
        cin >> entries[i];
    }
    long int Q;
    cout << "Enter number of Queries to check:\n";
    cin >> Q;
    cout << "Number of Queries:\n";
    string queries[1000];
    for(long int i=0;i<Q;i++)
    {
        cin >> queries[i];
    }
    ///now checking
    int count=0,a=0;
    int val[1000];

    for(int i=0;i<N;i++)
    {
        if(queries[a]==entries[i])
        {
            count++;
            //cout <<" For>> " << queries[a] << ": " << count << endl;
        }
        if(i==N-1)
        {
            val[a]=count;
            count = 0;
            a++;
            i=-1;
        }
        if(a==(Q))
        {
            break;
        }
    }
    for(int i=0;i<Q;i++)
    {
        cout <<" "<<queries[i]<<" came: "<< val[i] << " Times" << endl;
        //cout << val[i] << endl;
    }
    return(0);
}
