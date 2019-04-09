#include <iostream>
#include <vector>
#include <string>
//#define DEBUG
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<long int> a(n);
    long int ans;
    if(n >= 3){
        a.at(0) = 0;
        a.at(1) = 0;
        a.at(2) = 1;
        
        
        for(int i = 3; i < a.size(); i++){
            a.at(i) = a.at(i-3) + a.at(i-2) + a.at(i-1);
            a.at(i) = a.at(i) % 10007;
        }
    }
    else{
        ans = 0;
    }
    ans = a.back();
    cout << ans % 10007 << endl;
}