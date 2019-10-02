#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <numeric>

//#define DEBUG
using namespace std;

int main(){
    vector<int> A(3);
    for(int i = 0; i < 3; i++){
        cin >> A.at(i);
    }
    int five = 0;
    int seven = 0;
    for(int i = 0; i < 3; i++){
        if(A.at(i) == 5){
            five++;
        }
        else if(A.at(i) == 7){
            seven++;
        }
    }
    if(seven == 1 && five == 2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    


}
