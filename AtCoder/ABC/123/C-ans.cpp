#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
//#define DEBUG
using namespace std;

int main(){
    long long N, A, B, C, D, E;
    cin >> N;
    cin >> A >> B >> C >> D >> E;
    long long MinMove = min( {A, B, C, D, E} );
    long long ans = ((N + MinMove - 1) / MinMove) + 4;

    cout << ans << endl;
}