#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    float total = 0;
    for(int i = 0;i < N; i++){
        float x;
        string u;
        cin >> x;
        cin >> u;
        if(u == "JPY"){
            total += x;
        }
        if(u == "BTC"){
            total += (380000*x);
        }
    }
    cout << total << endl;
}