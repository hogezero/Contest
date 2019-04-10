#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    //vector<int> a(n);
    //vector<int> b(n);
    vector<vector<int> > money_num(n, vector<int>(2));
    for(int i = 0;i < n; i++){
        cin >> money_num.at(i).at(0);
        cin >> money_num.at(i).at(1);

    }
    sort(money_num.begin(), money_num.end());
    int counter = 0;
    long ans = 0;
    /*
    cout << "---------------" << endl;
    for(int i = 0; i < n; i++){
        cout << "A " << money_num.at(i).at(0);
        cout << " B " << money_num.at(i).at(1) << endl;
    }
    cout << "---------------" << endl;
    */
    for(int i = 0; i < n; i++){
        if(counter == m)
                break;
        for(int j = 1; j <= money_num.at(i).at(1); j++){
            if(counter == m)
                break;
            counter++;
            ans += money_num.at(i).at(0);
        }
    }
    cout << ans << endl;
}