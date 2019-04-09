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


    for(int i = 0; i < S.size(); i++){
        cin >> S.at(i);
    }
    S_org = S;
    sort(S.begin(), S.end());
    S.erase(unique(S.begin(), S.end()), S.end());

    vector<int> C(S.size());
    
    for(int i = 0; i < S.size(); i++){
        for(int j = 0; j < S_org.size(); j++){
            if(S.at(i) == S_org.at(j)) C.at(i) += 1;
        }
    }
    vector<int>::iterator maxIt = max_element(C.begin(), C.end());
    size_t maxIndex = distance(C.begin(), maxIt);
    cout << S.at(maxIndex) << endl;


}