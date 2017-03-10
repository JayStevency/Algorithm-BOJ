//
// Created by jay on 2017. 3. 10..
//

#include <iostream>

using namespace std;

int main(){
    int arr[5];
    int total = 0;
    for(int i = 0 ; i < 5; i++){
        cin >> arr[i];
        if(arr[i] < 40) arr[i] = 40;
        total += arr[i];
    }

    cout << total/5 << endl;

    return 0;
}