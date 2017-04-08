//
// Created by jay on 2017. 4. 8..
//

#include <iostream>
#include <cmath>

using namespace std;

int n;

int divide() {
    int x = n;
    int cnt = 0;
    while(x > 0){
        x /= 10;
        cnt++;
    }
    return cnt;
}

int main(){

    cin >> n;

    int digit_num = divide();
    int ans = 0;
    for(int i = 1; i < digit_num ; i++) {
        ans += i * 9 * (int)pow((double)10,(double)(i-1));
    }
    ans += digit_num * (n + 1 - (int) pow((double) 10, (double) (digit_num-1)));
    cout << ans << endl;
    return 0;
}