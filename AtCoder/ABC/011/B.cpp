#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
//#define DEBUG
using namespace std;

int main(){
    string S;
    cin >> S;
    for(int i = 0; i < S.length(); i++){
        if(i == 0){
            S.at(i)  = toupper(S.at(i));
        }else{
            S.at(i) = tolower(S.at(i));
        }
    }
    cout << S << endl;

}