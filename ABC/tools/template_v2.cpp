
#include <iostream>
#include <vector>
using namespace std;

/*
入力
a
x1, x2, ... xa
**/

int main(){
    int a;
    cin >> a;
    
    vector<int> data(a);
    for(int i = 0; i < a; i++){
        cin >> data.at(i);
    }

    for(int i = 0; i < data.size(); i++){
        cout << data.at(i);
        if (!(i == data.size())){
            cout << " ";
        }
    }
    cout << endl;

}