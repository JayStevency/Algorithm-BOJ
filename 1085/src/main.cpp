//
// Created by jay on 2017. 4. 13..
//
#include <iostream>

using namespace std;


int x, y, w, h;

int min_val(int a, int b, int c, int d){
    return min(min(a,b),min(c,d));
}

int main(){

    cin >> x >> y >> w >> h;

    cout << min_val(x,y,w-x,h-y) << endl;

    return 0;
}
