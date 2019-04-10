#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> card{1,2,3,4,5,6};
    
    int N;
    cin >> N;
    if(N > 30){
        N = N % 30;
    }
    for(int i = 0; i < N; i++){

        int tmp = card.at((i % 5));
        card.at((i % 5)) = card.at((i % 5) + 1);
        card.at((i % 5) + 1) = tmp;
    }
    for(int i = 0; i < card.size(); i++){
        cout << card.at(i);
    }
    cout << endl;
}