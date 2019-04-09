#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
//#define DEBUG
using namespace std;

int main(){
    double txa, tya, txb, tyb, T, V;
    cin >> txa >> tya >> txb >> tyb >> T >> V;

    int n;
    cin >> n;
    vector<pair <double, double> > point(n);
    vector<double> dis(n);
    vector<double> dis2(n);
    for(int i = 0; i < n; i++){
        cin >> point.at(i).first >> point.at(i).second;
        dis.at(i)  = pow(pow((point.at(i).first - txa), 2.0) + pow((point.at(i).second - tya), 2.0), 0.5);
        dis2.at(i) = pow(pow(txb - point.at(i).first, 2.0) + pow(tyb - point.at(i).second, 2.0), 0.5);

    }

    double speed = T * V;
    bool flag = false;
    for(int i = 0; i < n; i++){
        //cout << "dis.at(i)" << dis.at(i) << endl;
        //cout << "dis2.at(i)" << dis2.at(i) << endl;
        if((dis.at(i) + dis2.at(i)) <= (T*V) ) {
            flag = true;
            break;
        }
    }
    if(flag){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

}