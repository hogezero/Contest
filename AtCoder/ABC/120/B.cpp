#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/* 公倍を求める関数 */
vector<int> divisor(int num){
    vector<int> vec;
    for(int i = 1;i <= num; i++){
        if(num%i == 0){
            vec.push_back(i);
        }
    }
    return vec;
}

int main(){
    int a, b, k;
    cin >> a >> b >> k;
    vector<int> a_div;
    vector<int> b_div;
    vector<int> ans;
    a_div = divisor(a);
    b_div = divisor(b);
    set_intersection(a_div.begin(), a_div.end(), b_div.begin(), b_div.end(), back_inserter(ans));

    sort(ans.rbegin(), ans.rend()); // 降順にソート
    cout << ans.at(k-1) << endl;
}