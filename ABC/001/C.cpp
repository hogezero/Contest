#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#define ARRAY_SIZE(array) (sizeof(array)/sizeof(array[0]))  // 配列の個数(string)
using namespace std;
int main(){
    float deg;
    int dis;
    string directions[] = {
        "N",
        "NNE",
        "NE",
        "ENE",
        "E",
        "ESE",
        "SE",
        "SSE",
        "S",
        "SSW",
        "SW",
        "WSW",
        "W",
        "WNW",
        "NW",
        "NNW",
    };
    string dir;

    cin >> deg;
    cin >> dis;

    deg = deg / 10;
    float a = 11.25;
    const float add = 22.5;
    for(int i = 0; i < ARRAY_SIZE(directions); i++){
        if( a <= deg && deg < (a + add) ){
            dir = directions[i+1];
            break;
        }else{
            dir = "N";
        }
        a += add;
    }


    int w;
    const int second = 60;
    float ans = ((float)dis / second) + 0.000000001;
    ans = round(ans * 10) / 10;


    if( 0<= ans &&  ans <= 0.2){
        w = 0;
    }
    else if(0.3  <=  ans &&  ans <= 1.5 ){
        w = 1;
    }
    else if(1.6  <=  ans &&  ans <= 3.3 ){
        w = 2;
    }
    else if(3.4  <=  ans &&  ans <= 5.4 ){
        w = 3;
    }
    else if(5.5  <=  ans &&  ans <= 7.9 ){
        w = 4;
    }
    else if(8.0  <=  ans &&  ans <= 10.7 ){
        w = 5;
    }
    else if(10/8  <=  ans &&  ans <= 13.8 ){
        w = 6;
    }
    else if(13.9  <=  ans &&  ans <= 17.1 ){
        w = 7;
    }
    else if(17.2  <=  ans &&  ans <= 20.7 ){
        w = 8;
    }
    else if(20.8  <=  ans &&  ans <= 24.4 ){
        w = 9;
    }
    else if(24.5  <=  ans &&  ans <= 28.4 ){
        w = 10;
    }
    else if(28.5  <=  ans &&  ans <= 32.6 ){
        w = 11;
    }
    else if(32.7  <=  ans){
        w = 12;
    }
    if(w == 0){
        dir = "C";
    }
    

    cout << dir << " " << w << endl;



}