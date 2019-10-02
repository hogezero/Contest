#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

void input(int &x);
void show(int x);

//#define DEBUG
using namespace std;

int main(){
    int a;
    int b;
    cin >> a;
    cin >> b;
    if(a == b){
        cout << 0 << endl;
        return 0;
    }
    
    else{
        cout << (b - (a % b)) << endl;
    }
}

void input(int &x){
    cin >> x;
}
void show(int x){
    cout << x << " ";
}