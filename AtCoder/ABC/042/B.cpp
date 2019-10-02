#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cstring>

void input_vector(int &x);
void show(int x);

//#define DEBUG
using namespace std;

int main(){
    int N, L;
    cin >> N >> L;

    vector<string> S(N);

    for(int i = 0; i < N; i++){
        cin >> S.at(i);
    }

    sort(S.begin(), S.end());
    string ans = "";
    for(int i = 0; i < N; i++){    
        ans += S.at(i);
        //cout << S.at(i) << endl;
    }
    cout << ans << endl;

}