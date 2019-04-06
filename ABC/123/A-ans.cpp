#include <iostream>
#include <string>
using namespace std;
int main(){
    int a, b, c, d, e, k;
    cin >> a >> b >> c >> d >> e;
    cin >> k;
    string ans;
    int L = e - a;
    if(L <= k ) ans = "Yay!";
    else ans = ":(";

    cout << ans << endl;
}