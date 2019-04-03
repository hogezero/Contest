#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define DEBUG
using namespace std;

int main(){
    int T, N;
    cin >> T;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A.at(i);
    }
    int M; 
    cin >> M;
    vector<int> B(M);
    for(int i = 0; i < M; i++){
        cin >> B.at(i);
    }
    if(N < M){
        cout << "no" << endl;
        return 0;
    }
    bool flag = true;

    int tmp = 0;
    for(int i = 0; i < M; i++){
    }
    if(flag){
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;
    }
}