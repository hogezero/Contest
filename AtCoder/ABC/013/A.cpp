#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
//#define DEBUG
using namespace std;

int main(){
    char X;
    int ans;
    string S = "ABCDE";

    cin >> X;
    for(int i = 0; i < S.length(); i++){
        if(X == S.at(i)){
            ans = i + 1;
        }
    }
    cout << ans << endl;
}