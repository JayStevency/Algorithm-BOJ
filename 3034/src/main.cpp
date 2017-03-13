//
// Created by jay on 2017. 3. 13..
//

#include <iostream>
#include <cmath>
using namespace std;

int n, w, h;

bool isTrue(int n){
    int maxLeng =
            (int) sqrt(pow((double) w,2.0) + pow((double) h, 2.0));
    return (n > maxLeng ? false : true );
}



int main(){
    cin >> n >> w >> h;

    for(int i = 0 ; i < n ; i++){
        int len;
        cin >> len;
        if(isTrue(len)) cout << "DA" << endl;
        else
            cout << "NE" << endl;
    }

    return 0;
}