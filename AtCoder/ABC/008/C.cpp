#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
//#define DEBUG
using namespace std;

int factorial(int n) {
    int ans = 1;
    int k;

    for(k = 1; k <= n; k++) {
        ans *= k;
    }
    return ans;
}

int main(){
    int N;
    double ans;
    cin >> N;
    vector<int> C(N);
    for(int i = 0; i < C.size(); i++){
        cin >> C.at(i);
    }

    vector<int> coin(N);
    for(int i = 0; i < C.size(); i++){
        coin.at(i) = -1;
        for(int j = 0; j < C.size(); j++){
            if(C.at(i) % C.at(j) == 0) coin.at(i)++;
        }
        // 期待値
        ans += (double) (coin.at(i) / 2 + 1) / (coin.at(i)+1);
    }

    #ifdef DEBUG
    for(int i = 0; i < coin.size(); i++){
        cout << (double) (coin.at(i) / 2 + 1) / (coin.at(i)+1)<< " ";
        if(i + 1 == coin.size()) cout << endl;
    }
    #endif


    cout << std::fixed << std::setprecision(6) << ans << endl;
}