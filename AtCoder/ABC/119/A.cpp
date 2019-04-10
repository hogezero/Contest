#include <iostream>
#include <string>
#include <stdio.h>
#include <sstream>
using namespace std;

int main(){
    string s;
    cin >> s;
   
    if( atoi(s.substr(0,4).c_str()) <= 2019){
        if( atoi(s.substr(5,7).c_str()) > 4 && atoi(s.substr(0,4).c_str()) == 2019){
            cout << "TBD" << endl;
        }else{
            cout << "Heisei" << endl;
        }
    }else{
        cout << "TBD" << endl;
    }
}