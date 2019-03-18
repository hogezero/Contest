#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


vector<int> yakusuu(int num){
    vector<int> vec;
    for(int i = 1;i <= num; i++){
        if(num%i == 0){
            vec.push_back(i);
        }
    }
    return vec;
}





int main(){
    int n;
    cin >> n;
    
    vector<int> data(n);
    for(int i = 0; i < n; i++){
        cin >> data.at(i);
    }

    sort(data.begin(), data.end());
    int max = 0, min = 0;
    max = data.back();
    min = data.front();
    vector<int> ans;
    vector<int> result;
    for(int i = 0; i < data.size(); i++){

        ans = yakusuu(data.at(i));

        for(int j = 0; j < ans.size(); j++){
            cout << ans.at(j) << " ";
        }

    }


}