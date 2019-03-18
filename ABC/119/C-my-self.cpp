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


    for(int i = 0; i < n; i++){
        cin >> l.at(i);
    }
    int take_maximum = max(a, max(b, c));
    int kake_minimum = min(a, min(b, c));
    sort(l.begin(), l.end());
    bool a_f = false;
    bool b_f = false;
    bool c_f = false;
    for(int i = 0; i < l.size(); i++){
        if(a == l.at(i)){
            l.erase(l.begin()+i);
            a_f = true;
        }
        if(b == l.at(i)){
            l.erase(l.begin()+i);
            b_f = true;
        }
        if(c == l.at(i)){
            l.erase(l.begin()+i);
            c_f = true;
        }
    }

    vector<int> a_diff(l.size());
    vector<int> b_diff(l.size());
    vector<int> c_diff(l.size());
    // 長さの比較
    for(int i = 0; i < l.size(); i++){
        if(!a_f)
            a_diff.at(i) = abs(a - l.at(i));
        if(!b_f)
            b_diff.at(i) = abs(b - l.at(i));
        if(!c_f)
            c_diff.at(i) = abs(c - l.at(i));
    }


    for(int i = 0; i < l.size(); i++){
        cout << l.at(i) << " ";
    }
    cout << endl;

    for(int i = 0; i < a_diff.size(); i++){
        cout << a_diff.at(i) << " ";
    }
    cout << endl;

}