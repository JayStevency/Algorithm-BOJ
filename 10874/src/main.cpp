//
// Created by jay on 2017. 4. 13..
//

#include <iostream>

using namespace std;

int n;
int main(){
    cin >> n;
    int check = 1;
    for(int i = 1; i <= n;i++){
        for(int j = 1; j<= 10; j++){
            int tmp;
            cin >> tmp;
            if(!((j - 1) % 5 + 1 == tmp)) check = 0;
        }
        if(check == 1) cout << i << endl;
        check = 1;
    }

    return 0;
}