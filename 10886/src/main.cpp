//
// Created by jay on 2017. 3. 12..
//


#include <iostream>

using namespace std;

int n;
int main(){
    cin >> n;
    int one_count = 0 , zero_count = 0, tmp;
    for(int i= 0 ; i < n ; i++){
        cin >> tmp;
        if(tmp) one_count++;
        else zero_count++;
    }
    if(one_count > zero_count) cout << "Junhee is cute!" << endl;
    else
        cout << "Junhee is not cute!" << endl;


    return 0;
}