#include <iostream>
#include <vector>
#include <string>
//#define DEBUG
using namespace std;

int main(){
    int a, b, c, d, e, k;
    cin >>a >> b >> c >> d >> e >> k;

    if(b - a  <= k &&  c - a <= k &&  d - a <= k  && e - a <= k &&  c-b <= k && d-b <= k &&  e-d <= k &&  d-c <= k &&  e-c <= k && e -d <= k){
        cout << "Yay!" << endl;
    }else{
        cout << ":(" << endl;
    }
    
    
}