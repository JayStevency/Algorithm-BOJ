//
// Created by jay on 2017. 3. 10..
//

#include <iostream>
#include <cmath>
using namespace std;

int a, b , c;
int cnt[10];

void func(long long x){
    string num = to_string(x);
    for(int i = 0 ; i < num.size();i++){
        cnt[num.at(i) - '0']++;
    }
}




int main(){

    cin >> a >> b >> c;

    long long result = a * b * c;
    func(result);

    for(int i = 0 ; i < 10; i++){
        cout << cnt[i] << endl;
    }

    return 0;
}
