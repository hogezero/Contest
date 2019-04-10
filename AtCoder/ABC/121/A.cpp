#include <iostream>
#include <vector>
using namespace std;

int main(){
    int H, W;
    cin >> H >> W;

    int h_b, w_b;
    cin >> h_b >> w_b;

    int total[H][W];

    for(int i = 0; i < H; i++){
        for(int  j= 0; j < W; j++){
            total[i][j] = 1;
        }
    }

    
    for(int i = H - h_b; i < H; i++){
        for(int  j= 0; j < W; j++){
            total[i][j] = 0;
        }
    }

    for(int i = 0; i < H; i++){
        for(int  j= 0; j < w_b; j++){
            total[i][j] = 0;
        }
    }    


    int counter = 0;
    for(int i = 0; i < H; i++){
        for(int  j= 0; j < W; j++){
            if(total[i][j] == 1){
                counter += 1;
            }
        }
    }
    cout << counter << endl;
}