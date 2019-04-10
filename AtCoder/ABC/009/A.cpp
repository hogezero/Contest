#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
//#define DEBUG
using namespace std;

int main(){
    int N;
    int ans = 0;
    cin >> N;
    ans = N / 2 + 1;
    if(N % 2 == 0){
        ans = ans - 1;
    }
    cout << ans << endl;

}