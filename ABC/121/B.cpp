#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, m, c;
    cin >> n >> m >> c;


    vector<int> b(m);
    for(int i = 0; i < m; i++){
        cin >> b.at(i);
    }

    vector<vector<int> > a(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0;j < m; j++){
            cin >> a.at(i).at(j);
        }
    }

    int counter = 0;
    for(int i = 0; i < n; i++){
        int total = 0;
        for(int j = 0;j < m; j++){
            total += (b.at(j) * a.at(i).at(j));
        }
        total += c;
        if(total > 0)
            counter++;
    }
    cout << counter << endl;


}