#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

//#define DEBUG
using namespace std;

int main(){
    int n, X;
    cin >> n >> X;
    vector<int> a(n);
    int ans = 0;
    for(int i = 0; i < n; i++){
        cin >> a.at(i);
        if(X >> i & 1){
            ans += a.at(i);
        }
    }
    cout << ans << endl;
}
