#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string s;
    int zero_count;
    int one_count;
    int ans;
    cin >> s;
    int n = s.size();
    zero_count = count(s.begin(), s.end(), '0');
    one_count  = count(s.begin(), s.end(), '1');
    ans = min(zero_count, one_count);
    cout << ans * 2 << endl;
}