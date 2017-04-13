//
// Created by jay on 2017. 4. 13..
//
#include <iostream>

using namespace std;

int n;

int gcd(int a, int b){
    return (b ? gcd(b, a%b) : a);
}

void ans(int g){
    for(int i = 1; i <=g; i++){
        if(g % i == 0) cout << i << endl;
    }
}

int main(){

    cin >> n;
    int a, b, c;
    if(n == 2){
        cin >> a >> b;
        ans(gcd(a,b));
    }else if(n == 3){
        cin >> a >> b >> c;
        ans(gcd(gcd(a,b),c));
    }
    return 0;
}
