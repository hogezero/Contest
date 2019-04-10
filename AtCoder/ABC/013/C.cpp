#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
//#define DEBUG
using namespace std;


int main(){
    long int N, H;
    long int A, B, C, D, E;
    cin >> N >> H;
    cin >> A >> B >> C >> D >> E;

    long int ans  = 99999999;
    for(long int i = 0; i <= N; i++){
        long int k = 0;
        if( (N - i)*E - H - B*i < 0){
            k = 0;
        }else{
            k = ((N - i)*E - H - B*i) / (D+E) + 1;
        }
        if((H + B*i + D*k - (N - i - k)*E) > 0){
            ans = min(ans, A*i + C*k);
        }
        #ifdef DEBUG
        cout << "i: " << i << endl;
        cout << "k: " << k << endl;
        cout << "ans: " << ans << endl;
        #endif
    }
    cout << ans << endl;
}