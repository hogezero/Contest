#include <iostream>
#include <vector>
#include <algorithm>
//#define DEBUG
using namespace std;

int main(){
    int a, b, c, d, e;
    int N = 5;
    cin >> a >> b >> c >> d >> e;
    vector<int> Time = { a, b, c, d, e};
    vector<int> index = {0, 1, 2, 3, 4};
    int bestTime = (int)1e9;
    // 0, 1, 2, 3, 4
    // 0, 1, 2, 4, 3
    //:
    do{
        int NowTime = 0;
        for(int i = 0; i < N; i++) {
            while(NowTime % 10 != 0)
                NowTime++;
            NowTime += Time.at(index.at(i));
       }

       #ifdef DEBUG
           for(int k = 0; k < index.size(); k++){
               cout << index.at(k) << " ";
           } cout << endl;
       #endif
       
       bestTime = min(NowTime, bestTime);
    } while(next_permutation(index.begin(), index.end()));
    cout << bestTime << endl;

}
