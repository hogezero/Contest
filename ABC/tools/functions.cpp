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
/* 2個の最大公約数 */
int gcd(int a, int b){
    if(a < b) swap(a, b);
    if(b == 0) return a;
    else
    {
        return gcd(b, a % b);
    }
}

/* n個の最大公約数 */
/* n: 負でない整数 */
/* a[0], a[1], ... a[n-1]の最大公約数 */
int ngcd(int n, vector<int> a){
    int i, d;

    d = a.at(0);
    for(i = 1; i < n && d!= 1; i++){
        d = gcd(a.at(i), d);
    }
    return d;
}


int main(){
    cout << endl;
}