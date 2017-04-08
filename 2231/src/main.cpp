//
// Created by jay on 2017. 4. 8..
//

#include <iostream>
#define MAX 1000001

using namespace std;

int cache[MAX];
int n;

int digitCalc(int x){
    int ret = 0;
    while(x > 0){
        ret += x % 10;
        x /= 10;
    }
    return ret;
}

void calc(){
    for(int i = 1; i < MAX;i++){
        cache[i] = i + digitCalc(i);
    }
}
void ans(){
    for(int i = 1; i < MAX; i++){
        if(cache[i] == n) {
            cout << i << endl;
            return ;
        }
    }
    cout << 0 << endl;
}

int main(){
    calc()  ;
    cin >> n;
    ans();
    return 0;
}