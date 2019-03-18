#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
#include <limits>
#include <numeric>
#include <type_traits>
using namespace std;


vector<int> divisor(int num){
    vector<int> vec;
    for(int i = 1;i <= num; i++){
        if(num%i == 0){
            vec.push_back(i);
        }
    }
    return vec;
}

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

    for(int i = 0; i < N; i++){
        cin >> A.at(i);
    }
    sort(A.begin(), A.end());

    vector<vector<int> > max_divisors(N, vector<int>(N));

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i == j)  continue;
            max_divisors.at(i).at(j) = gcd(A.at(i),A.at(j));
        }
    }

    int ans;

    for(int i =0; i < N; i++){
        for(int j = 0;j < N; j++){
            if((i+1) == N) break;
            if(max_divisors.at(i).at(j) == 0 || max_divisors.at(i+1).at(j) == 0)  continue;
            if(max_divisors.at(i).at(j) == max_divisors.at(i+1).at(j)){
                ans = max_divisors.at(i).at(j);
            }

        }
    }
    cout << ans << endl;
    /*
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << max_divisors.at(i).at(j) << " ";
        }
        cout << endl;
    }
    */

}