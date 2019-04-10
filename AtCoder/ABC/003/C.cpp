#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(){
    int N, K;
    double rate = 0;
    double tmp_rate = 0;
    cin >> N >> K;
        vector<double> R(N);
    for(int i = 0; i < R.size(); i++){
        cin >> R.at(i);
    }
    sort(R.begin(), R.end());
    // for(int i = 0; i < R.size(); i++){
    //     cout << R.at(i) << " ";
    //     // rate = (rate + R.at(i)) / 2;
    // }
    // cout << endl;

    for(int i = N-K ; i < N; i++){
        rate = (rate + R.at(i)) / 2;
    }
    //printf("%.11f\n", rate);
    cout << fixed;
    cout << setprecision(10) << rate << endl;
}