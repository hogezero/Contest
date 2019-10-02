#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
//#define DEBUG
using namespace std;

bool check_one(char c){
    if(c == '1'){
        return true;
    }
    return false;
}

int main(){
    string S;
    cin >> S;
    // int one_num = count(S.begin(), S.end(), '1');
    // int zero_num = count(S.begin(), S.end(), '0');
    // int ans = 0;
    // int max_num = max(one_num, zero_num);
    int cnt = 0;
    for(int i = 1; i < S.length()-1; i++){
        if((S.at(i-1) == S.at(i) && S.at(i) == S.at(i+1)) || S.at(i-1) == S.at(i+1)){
            if(check_one(S.at(i))){
                S.at(i) = '0';
            }else{
                S.at(i) = '1';
            }
            cnt++;
        }
    
    }
    cout << cnt << endl;
}