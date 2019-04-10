#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
//#define DEBUG
using namespace std;

int main(){

    vector<int> order(5);
    vector<int> rem_zero;
    vector<int> rem_rem;
    vector<int> ans_rem;

    for(int i = 0; i < order.size(); i++){
        cin >> order.at(i);

        if(order.at(i) % 10 == 0){
            rem_zero.push_back(order.at(i));
        }else{
            rem_rem.push_back(order.at(i));
        }
    }
    
    sort(rem_rem.rbegin(), rem_rem.rend(), [](int x, int y) { return (x%10) < (y%10);});
    sort(rem_zero.rbegin(), rem_zero.rend());
    int ans = 0;

    for(int i = 0; i < rem_zero.size(); i++){
        //cout << rem_zero.at(i) << " ";
        ans_rem.push_back(rem_zero.at(i));
    } 
    for(int i = 0; i < rem_rem.size(); i++){
        //cout << rem_rem.at(i) << " ";
        ans_rem.push_back(rem_rem.at(i));
    } 
    
    for(int i = 0; i < ans_rem.size(); i++){
        ans += ans_rem.at(i);
        while(ans % 10 != 0){
            if(i == 4)
                break;
            ans += 1;
        }
    }
    cout << ans << endl;
}