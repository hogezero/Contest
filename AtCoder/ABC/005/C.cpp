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

    for(int i = 0; i < B.size(); i++){
        bool flag = false;
        for(int j = 0; j < A.size(); j++){
            if(A.at(j) <= B.at(i) && B.at(i) - A.at(j) <= T){
                A.erase(A.begin()+j);
                flag = true;
                break;
            }
        }
        if(flag == false){
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;

}