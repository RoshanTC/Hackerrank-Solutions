#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main(){
    int num;
    string name, number;
    cin >> num;
    map<string, string> p_book;
    //import map
    for(int i = 0; i < num; i++){
        cin >> name >> number;
        p_book.insert(pair<string, string>(name, number));
    }
    //output map
    string f_name;
    while(true){
        cin >> f_name;
        if(f_name == "\n")break;
        auto i_it = p_book.find(f_name);
        if(i_it == p_book.end()){
            cout << "Not found" << endl;
        }
        else cout << f_name << "=" << i_it->second << endl;
        f_name = "\n";
    }
    return 0;
}
