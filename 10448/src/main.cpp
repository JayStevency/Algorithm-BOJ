//
// Created by jay on 2017. 3. 12..
//

#include <iostream>
#include <vector>
#define MAX_K 1001
#define MAX_TRI 46
using namespace std;

int t[MAX_TRI];
int k, test;
bool isTriNumber[MAX_K];




int main(){
    cin >> test;
    for(int i = 1; i <= MAX_TRI; i++){
        t[i] = (i*(i+1))/2;
    }

    for(int i = 1; i< MAX_TRI; i++){
        for(int j = 1; j < MAX_TRI; j++){
            for(int l = 1; l<MAX_TRI; l++) {
                int result= t[i] + t[j] + t[l];
                if(result <= MAX_K)
                    isTriNumber[result] = true;
            }
        }
    }

    for(int i = 0 ; i < test; i++){
        cin >> k;
        if(isTriNumber[k]) cout << "1" << endl;
        else
            cout << "0" << endl;
    }

    return 0;
}