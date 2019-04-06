#include <iostream>
#include <vector>
#include <string>
//#include <tuple>
#include <queue>
#include <iomanip>

// #define DEBUG
#define INF -1
using namespace std;

struct POINT{
    int dy;
    int dx;
};

int main(){
    int R, C;
    int sy, sx;
    int gy, gx;
    cin >> R >> C;
    cin >> sy >> sx;
    cin >> gy >> gx;
    //tuple<int, int> start_point = make_tuple(sy, sx);
    //tuple<int, int> goal_point  = make_tuple(gy, gx);

    
    
    // c配列に数を合わす
    sy -= 1;
    sx -= 1;
    gy -= 1;
    gx -= 1;

    // マップ
    char c[R][C];

    // マップ(int)
    // 壁: -2
    // 未探索: -1
    vector<vector <int>> dis(R, vector<int>(C,  INF));
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            cin >> c[i][j];
            if(c[i][j] == '#'){
                continue;
            }
            else if(c[i][j] == '.'){
                dis.at(i).at(j) = 0;
            }
        }
    }

    // キューを宣言(int, int)
    queue<POINT> q;
    q.push(POINT{sy, sx});  // キューにスタート地点を格納
    dis.at(sy).at(sx) = 0; // スタートを0に設定

    // 進む方向
    int dy_old[] = {1, 0, -1, 0};
    int dx_old[] = {0, 1, 0, -1};
    vector<int> dy(dy_old, std::end(dy_old));
    vector<int> dx(dx_old, std::end(dx_old));

    while(!q.empty()){
        POINT visited = q.front();
        q.pop();
        
        for(int i = 0; i < 4; i++){
            int y = visited.dy + dy.at(i);
            int x = visited.dx + dx.at(i);
            #ifdef DEBUG
                cout << "y: " << y << " x: " << x << endl;
            #endif

            if( y >= 0 && R >= y && x >= 0 && C >= x && dis.at(y).at(x) == 0 && dis.at(y).at(x) != -1){
                q.push(POINT{y, x});
                dis.at(y).at(x) = dis.at(visited.dy).at(visited.dx) + 1;
            }
        }
    }

    #ifdef DEBUG
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            cout << setw(3)<< dis.at(i).at(j) << " ";
        }
        cout << endl;
    }
    #endif
    cout << dis.at(gy).at(gx) << endl;
}