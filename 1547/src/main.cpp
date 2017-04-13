//
// Created by jay on 2017. 4. 13..
//

#include <iostream>
#define MAX 4
using namespace std;

int m;

bool check[MAX];

int main(){
    cin >> m;
    check[1] = true;
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        if(check[a]){
            check[a] = false;
            check[b] = true;
        }else if(check[b]) {
            check[b] = false;
            check[a] = true;
        }
    }
    for(int i = 1 ;i < MAX; i++){
        if(check[i]) cout << i << endl;
    }

    if(check[1] == false && check[2]== false && check[3] == false) cout << -1 << endl;
    return 0;
}
