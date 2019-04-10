#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    float ans = 0;
    cin >> N;
    for(int i = 1;i <= N; i++){
        ans += (10000 * i) * (1 / (float)N);
        //cout << (10000 * i) * (1 / (float)N) << endl;
    }
    cout << ans << endl;
}