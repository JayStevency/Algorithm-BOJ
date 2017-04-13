//
// Created by jay on 2017. 4. 13..
//

#include <iostream>
#define MAX 31

using namespace std;


bool check[MAX];

int main(){
    int n;
    for(int i = 0 ; i < 28; i++){
        cin >> n;
        check[n] = true;
    }

    for(int i = 1 ; i < MAX; i++){
        if(!check[i]) cout << i << endl;
    }

    return 0;
}