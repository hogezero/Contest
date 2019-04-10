#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

using namespace std;

int main(){
    int N, Q;
    string S;
    string tmp;
    string ac = "AC";
    

    cin >> N; cin >> Q;
    cin >> S;
    
    vector<int> ans(N+1, 0);

    for(int i = 1; i < N; i++){
        if(S[i - 1] == 'A' && S[i] == 'C'){
            ans.at(i+1) = ans.at(i) + 1;
        }
        else{
            ans.at(i+1) = ans.at(i);
        }
    }

    int l;
    int r;

    for(int i = 0; i < Q; i++){
        cin >> l;
        cin >> r;
        cout << (ans.at(r) - ans.at(l)) << endl;
    }
}