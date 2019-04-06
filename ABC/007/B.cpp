#include <iostream>
#include <vector>
#include <string>
//#define DEBUG
using namespace std;

int main(){
    string A;
    cin >> A;
    if(A.length() == 1){
        char c = A[0];
        if(c == 'a'){
            cout << -1 << endl;
            return 0;
        }
        cout << char(c - 1) << endl;
        return 0;
    }

    cout << A.substr(0, A.length()-1) << endl;

}