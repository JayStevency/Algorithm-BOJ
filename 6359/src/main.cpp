//
// Created by jay on 2017. 3. 11..
//

#include <iostream>

using namespace std;

int n, t;


int countingRunner(bool *arr){
    int ret = 0;
    for(int i = 2 ; i <= n ; i ++){
        for(int j = 1; j <= n ; j++){
            if (j % i == 0){
                if(arr[j]) arr[j] = false;
                else
                    arr[j] = true;
            }
        }
    }

    for(int i = 1; i <=n ; i++) if(arr[i]) ret++;
    return ret;
}

int main(){
    cin >> t;
    for(int i = 0 ; i < t; i++) {
        cin >> n;
        bool *arr = new bool[n+1];
        for(int i = 1 ; i <= n ; i++)
            arr[i] = true;

        cout << countingRunner(arr) << endl;

    }

    return 0;
}