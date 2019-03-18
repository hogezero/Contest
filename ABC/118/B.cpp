#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> result(m, 0);
    int k = 0;
    for(int i = 0; i < n; i++){
        k = 0;
        cin >> k;
        vector<int> data(k, 0);
        for(int j = 0; j < k; j++){
            cin >> data.at(j);
        }
        for(int j = 0; j < k; j++){
            result.at(data.at(j)-1)++;
        }
    }

    int ans = 0;;
    for(int i = 0;i < m; i++){
        if(n == result.at(i)){
            ans++;
        }
    }
    cout << ans << endl;
}