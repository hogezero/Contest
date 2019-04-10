#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
//#define DEBUG
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    int tmp = A;
    A = B;
    B = tmp;
    cout << A << " " << B << endl;
}