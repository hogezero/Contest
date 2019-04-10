#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
//#define DEBUG
using namespace std;

int main(){
    int a, b;
    cin >> a;
    cin >> b;
    int tmp = a;
    int plus = 0;
    int minus = 0;
    while(a != b){
        if(a == 9){
            a = 0;
        }else{
            a++;
        }
        plus += 1;
    }

    while(tmp != b){
        if(tmp == 0){
            tmp = 9;
        }else{
            tmp--;
        }
        minus += 1;
    }
    int ans = min(plus, minus);
    cout << ans << endl;
}