#include <iostream>

using namespace std;

/* 2個の最大公約数 */
int gcd(int x, int y){
    if(y == 0)
        return x;
    else
        return gcd(y, x % y);
}

/* n個の最大公約数 */
/* n: 負でない整数 */
/* a[0], a[1], ... a[n-1]の最大公約数 */
int ngcd(int n, int a[]){
    int i, d;

    d = a[0];
    for(i = 1; i < n && d!= 1; i++){
        d = gcd(a[i], d);
    }
    return d;
}

int main(){
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    int ans = ngcd(n, a);
    cout << ans << endl;
}