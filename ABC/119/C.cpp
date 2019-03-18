#include <iostream>
#include <cassert>
#include <vector>
#include <algorithm>
#include <set>


using namespace std;

void comparison(vector<int> l, vector<int> diff){
    for(int i = 0; i < l.size(); i++){

    }
}


int main(){
    int n, a, b, c;
    int MP = 0;
    cin >> n;
    cin >> a >> b >> c;
    vector<int> l(n);
    vector<int> take(3);
    take.push_back(a);
    take.push_back(b);
    take.push_back(c);
    for(int i = 0; i < n; i++){
        cin >> l.at(i);
    }
    sort(l.begin(), l.end());
    sort(take.begin(), take.end());
    // 確認
    for(int i = 0; i < n; i++){
        for(int j = 0; j < take.size(); j++){
            if(take.at(j) == l.at(j)){
                
            }
        }
    }
    
}