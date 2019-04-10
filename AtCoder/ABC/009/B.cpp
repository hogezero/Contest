#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
//#define DEBUG
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A.at(i);
    }
    sort(A.rbegin(), A.rend());
    A.erase(unique(A.begin(), A.end()), A.end());
    cout << A.at(1) << endl;
}