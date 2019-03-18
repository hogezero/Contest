#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <stdio.h>

using namespace std;

// マクロ
#define ARRAY_SIZE(array) (sizeof(array)/sizeof(array[0]))  // 配列の個数(string)

/* 三角形の面積 */
float right_triangle_area(int xa, int ya, int xb, int yb, int xc, int yc){
    float s;
    s = abs( ((float)xb-(float)xa)*((float)yc-(float)ya) - ((float)yb-(float)ya)*((float)xc-(float)xa)) / 2;
    return s;
}


/* 3個の最大値 */
// max(x, y, z) = max(x, max(x,y)) 
int maximum_in_three(int a, int b, int c){
    if(a > b && a > c)  return a;
    else if(b > c && b > a)  return b;
    else if(c > a && c > b)  return c;
    else{
        return a;
    }
}
/* 3個の最小値 */
// min(x, y, z) = min(x, min(x,y)) 
int minimum_in_three(int a, int b, int c){
    if(a < b && a < c)  return a;
    else if(b < c && b < a)  return b;
    else if(c < a && c < b)  return c;
    else{
        return a;
    }
}

/* 公倍を求める関数 */
vector<int> divisor(int num){
    vector<int> vec;
    for(int i = 1;i <= num; i++){
        if(num%i == 0){
            vec.push_back(i);
        }
    }
    return vec;
}


/* ユークリッドの互除法 */
int gcd(int a, int b){
    if(a < b) swap(a, b);
    if(b == 0) return a;
    else
    {
        return gcd(b, a % b);
    }
}



/*
入力
a
x1, x2, ... xa
**/
int main(){
    int a;
    cin >> a;
    
    vector<int> data(a);
    for(int i = 0; i < a; i++){
        cin >> data.at(i);
    }

    for(int i = 0; i < data.size(); i++){
        cout << data.at(i);
        if (!(i == data.size())){
            cout << " ";
        }
    }
    cout << endl;

}