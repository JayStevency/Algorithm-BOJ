//
// Created by jay on 2017. 3. 7..
//

#include <iostream>

using namespace std;

int N, K = 1, t;

void solve(int N){
    if(N == 0) return;
    if(N < K){
        K = 1;
    }
    t++;
    solve(N - K++);
}

int main(){
    cin >> N;
    solve(N);
    cout << t << endl;
    return 0;
}