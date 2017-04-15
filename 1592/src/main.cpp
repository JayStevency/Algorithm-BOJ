//
// Created by jay on 2017. 4. 15..
//

#include <iostream>
#define MAX 1001
using namespace std;

int n, m, l;

int cnt[MAX];
int t;
void game(int p){
    cnt[p] += 1;
    t++;
    if(cnt[p] == m)
        return;
    if(cnt[p] % 2 == 1){
        int next = 0;
        if(p + l > n) next = (p+l)%n;
        else
            next = p + l;
        game(next);
    }else{
        int next = 0;
        if(p - l < 0) next = p - l + n;
        else if(p - l == 0) next = n;
        else
            next = p - l;
        game(next);
    }
}

int main(){

    cin >> n >> m >> l;

    game(1);

    cout << t - 1 << endl;


    return 0;
}
