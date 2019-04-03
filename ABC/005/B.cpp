#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
//#define DEBUG
using namespace std;

int main(){
    int N;

    cin >> N;
    vector<int> T(N);
    for(int i = 0; i < N; i++){
        cin >> T.at(i);
    }
    auto ans = std::minmax_element(T.begin(), T.end());
    cout << *ans.first << endl;
}