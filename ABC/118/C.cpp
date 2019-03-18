#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
#include <limits>
#include <numeric>
#include <type_traits>
using namespace std;

int gcd(int a, int b){
    if(a < b) swap(a, b);
    if(b == 0) return a;
    else
    {
        return gcd(b, a % b);
    }
}

int main(){
    int N;
    cin >> N;
    
    vector<int> A(N, 0);
    int ans;
    for(int i = 0; i < N; i++){
        cin >> A.at(i);
        ans = gcd(ans, A.at(i));
    }
    cout << ans << endl;
    

}