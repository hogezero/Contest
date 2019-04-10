#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
//#define DEBUG
using namespace std;

vector<int> NG(3);

bool is_NG_check(int x){
    for(int i = 0; i < 3; i++){
        if(x == NG.at(i)){
            return false;
        }
    }
    return true;
}

int main(){
    int N;
    cin >> N;
    for(int i = 0; i < 3; i++){
        cin >> NG.at(i);
    }

    if(!is_NG_check(N)){
        cout << "NO" << endl;
        return 0;
    }

    for(int i = 0; i < 100; i++){
        
        if(is_NG_check(N-3)){
            N -= 3;
        }
        else if(is_NG_check(N-2)){
            N -= 2;
        }
        else if(is_NG_check(N-1)){
            N -= 1;
        }else{
            cout << "NO" << endl;
            return 0;
        }
    }

    if(N <= 0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

}