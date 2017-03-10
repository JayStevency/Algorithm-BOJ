//
// Created by jay on 2017. 3. 10..
//
#include <iostream>

using namespace std;

int N, X;

int main(){
    cin >> N >> X;
    int tmp;
    for(int i = 0 ; i < N ; i++){
        cin >> tmp;
        if(tmp < X)
            cout << tmp << " ";
    }
    cout << endl;

    return 0;
}
