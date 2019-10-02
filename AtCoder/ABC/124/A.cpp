#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
//#define DEBUG
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    if(A == B){
        cout << A * 2 << endl;
    }else{
        if(A > B){
            cout << A* 2 - 1 << endl;
        }else{
            cout << B* 2 - 1 << endl;
        }
    }
}