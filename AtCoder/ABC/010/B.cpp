#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
//#define DEBUG
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a.at(i);
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = a.at(i); 0 < j; j--){
            //cout << "j: " << j << " ";
            if(j % 2 == 0 || j % 5 == 0){
                //cout << "!" << endl;
                ans++;
            }
            else{
                break;
            }
        }
        //cout << endl;
    }
    cout << ans << endl;

}