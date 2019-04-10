#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int tmp;
    int ans = 0;
    // aで聞ける
    // b: 所持金
    // c: 最大回数
    if(a <= b){
        tmp = b / a;
        if(tmp >= c){
            ans = c;
        }else{
            ans = tmp;
        }
    }
    cout << ans << endl;
}