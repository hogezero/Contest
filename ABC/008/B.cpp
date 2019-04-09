#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
//#define DEBUG
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<string> S(N);
    vector<string> S_org(N);
    
    for(int i = 0; i < N; i++){
        cin >> S.at(i);
    }

    // オリジナルをコピー
    S_org = S;
    

    // 重複をなくす
    sort(S.begin(), S.end());
    S.erase(unique(S.begin(), S.end()), S.end());

    vector<int> C(S.size());

    for(int i = 0; i < S.size(); i++){
        for(int j = 0; j < S_org.size(); j++){
            if(S.at(i) == S_org.at(j)){
                C.at(i) += 1;
            }
        }
    }

    // 最大値のイテレータ
    vector<int>::iterator iter = max_element(C.begin(), C.end());
    // indexを取得
    int index = distance(C.begin(), iter);
    cout << S.at(index) << endl;

    #ifdef DEBUG
    for(int i = 0; i < C.size(); i++){
        cout << C.at(i) << " ";
    } cout << endl;
    
    #endif

}