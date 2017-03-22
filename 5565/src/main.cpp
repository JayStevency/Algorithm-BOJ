//
// Created by jay on 2017. 3. 22..
//

#include <iostream>

using namespace std;

int arr[10];
int main(){
    int total = 0;
    for(int i = 0 ; i < 10; i++){
        cin >> arr[i];
        if(i != 0) total += arr[i];
    }
    cout << arr[0] - total << endl;
    return 0;
}