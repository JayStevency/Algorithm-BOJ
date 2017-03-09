//
// Created by jay on 2017. 3. 9..
//

#include <iostream>

#define MAX 50

using namespace std;

int N;
int arr[MAX][3];

void ranking(){

    for(int i = 0; i < N; i++){

        for(int j = 0; j < N; j++){
            if(arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1])
                arr[i][2]++;
        }
    }
}


int main(){

    cin >> N;
    for(int i = 0 ; i < N; i++) {
        cin >> arr[i][0] >> arr[i][1];
        arr[i][2] = 1;
    }

    ranking();

    for(int i = 0 ; i < N ; i++)
        cout << arr[i][2] << " ";
    cout << endl;

    return 0;
}