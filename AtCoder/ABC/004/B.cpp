#include <iostream>
#include <string>
//#define DEBUG
using namespace std;

int main(){
    char c[4][4];

    for(int i = 0;i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> c[i][j];
        }
    }

    for(int i = 0;i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << c[4-(i+1)][4-(j+1)] << " ";
        }
        cout << endl;
    }
}