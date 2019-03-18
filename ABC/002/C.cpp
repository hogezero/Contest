#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <stdio.h>
using namespace std;


float right_triangle_area(int xa, int ya, int xb, int yb, int xc, int yc){
    float s;
    s = abs( ((float)xb-(float)xa)*((float)yc-(float)ya) - ((float)yb-(float)ya)*((float)xc-(float)xa)) / 2;
    return s;
}

int main(){
    int xa, ya, xb, yb, xc, yc;
    float ans;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    ans = right_triangle_area(xa, ya, xb, yb, xc, yc);
    printf("%.1f\n", ans);
}
