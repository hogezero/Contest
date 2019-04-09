#include <iostream>
#include <vector>
#include <string>
//#define DEBUG
using namespace std;

int main(){
    int N, M;
    vector<int> ans = {-1, -1, -1};

    cin >> N >> M;

    int max_adult = M / 2;
    int max_aged_adult = M / 3;
    int max_baby = M / 4;
    bool check_loop = false;


    for(int i = 1;i <= max_adult; i++){
        for(int j = 1; j <= max_aged_adult; j++){
            for(int k = 1; k <= max_baby; k++){
                if(i + j + k == N && (i * 2) + (j * 3) + (k * 4) == M){
                    //cout << i << " " << j << " " << k << endl;
                    ans.at(0) = i;
                    ans.at(1) = j;
                    ans.at(2) = k;
                    check_loop = true;
                    break;
                }
            }
            if(check_loop){ break; }
        }
        if(check_loop){ break; }
    }
    cout << ans.at(0) << " " << ans.at(1) << " " << ans.at(2) << endl;
    

}