#include <iostream>

using namespace std;

int main()
{
    int sock;
    cin >> sock;
    int ts[sock];
    for(int i=1;i<=sock;i++)
    {
        cin >> ts[i];
    }
    /*for(int i=1;i<=sock;i++)
    {
        cout <<"("<<i<<")"<<ts[i]<<" ";
    }*/
    int count=0;
    int a,c;
        for(int i=1;i<=sock;i++)
        {
            if(i==sock)
            {
                cout << count;
                break;
            }
            if(ts[i]==0)
            {
                //Do nothing
            }
            else
            {
            c = i+1;
            if(c==sock+1)
            {
                //cout << "\n" <<count;
                break;
            }
            a = i;
            while(ts[a]!=ts[c])
            {
                c++;
                if(c==sock+1)
                {
                    break;
                }
            }
            if(ts[a]==ts[c])
                {
                count++;
                }
            //cout << "\n\n\tCount of matched pair: " << count;
            ts[c]=0;
            //cout << "\nNew value at " << c << " is: " << ts[c];
            if(i==sock+1)
            {
                break;
            }
            }
        }
        return(0);
}


