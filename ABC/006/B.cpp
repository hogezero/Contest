#include <iostream>
#include <vector>
#include <string>
//#define DEBUG
using namespace std;

int main(){
    int n;
    cin >> n;
    long int a = 0, b = 0, c = 1, d = 0;
    for(int i = 4; i <= n; i++){
        d = a + b + c;
        d = d % 10007;
        a = b;
        b = c;
        c = d;
    }
    cout << d % 10007 << endl;

}