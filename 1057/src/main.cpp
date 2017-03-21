//
// Created by jay on 2017. 3. 21..
//
#include <iostream>

using namespace std;

int k, l, n, cnt;

int main(){
    cin >> n >> k >> l;
    if( n < k || n < l){
        cout << "-1" << endl;
    }else{
        while(k != l){
            k = (k + 1)/2;
            l = (l + 1)/2;
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}
