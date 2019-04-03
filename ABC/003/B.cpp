#include <iostream>
#include <string>

using namespace std;

int main(){
    string S, T;
    string atcoder = "atcoder@";
    cin >> S;
    cin >> T;

    for(int i = 0;i < S.length(); i++){
        if(S.at(i) == '@'){
            for(int j = 0; j < atcoder.length(); j++){
                if(T.at(i) == atcoder.at(j)){
                    S.at(i) = T.at(i);
                }
            }
        }
        if(T.at(i) == '@'){
            for(int j = 0; j < atcoder.length(); j++){
                if(S.at(i) == atcoder.at(j)){
                    T.at(i) = S.at(i);
                }
            }
        }
    }
    if(S.compare(T) == 0){
        cout << "You can win" << endl;
    }
    else if(S.compare(T) != 0){
        cout << "You will lose" << endl;
    }

}