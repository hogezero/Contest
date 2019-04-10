#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
//#define DEBUG
using namespace std;

int main(){
    int N;
    cin >> N;
    int hours = N / 3600;
    int minutes = (N / 60) - (60*hours);
    int seconds = N - ((3600*hours) + (60*minutes));
    cout << setw(2) << setfill('0') << hours << ":";
    cout << setw(2) << setfill('0') << minutes << ":";
    cout << setw(2) << setfill('0') << seconds << endl;

}