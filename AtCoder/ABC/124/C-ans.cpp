#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
//#define DEBUG
using namespace std;

bool check_one(char c){
    if(c == '1'){
        return true;
    }
    return false;
}

int main(){
    string S;
    cin >> S;
    
    // 初期値は大きい値
    int ans = S.length();

    // iは最初に使う色(0 or 1)
    for(int i = 0; i < 2; i++){
        // 0を先に確認

        // iを最初に使った時に変えなければならないタイルの数
        int cnt = 0;

        for(int j = 0; j < S.length(); j++){

            if(j % 2 == 0 && S.at(j) != (char)(i+'0')) cnt++;
            if(j % 2 == 1 && S.at(j) == (char)(i+'0')) cnt++;
        }
        ans = min(ans, cnt);
    }

    
    cout << ans << endl;
}