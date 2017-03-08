//
// Created by jay on 2017. 3. 8..
//
#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 13

using namespace std;

int K = -1;

void printSubset(vector<int> &picked){
    for(int i = 0 ; i < picked.size(); i++) cout << picked[i] << " ";
    cout << endl;
}


void solve(int idx, int r, int *S, bool *checkElem){

    if(idx == K && r == 6){
        vector<int> picked;
        for(int i = 0 ; i < K; i++){
            if(checkElem[i]) picked.push_back(S[i]);
        }
        sort(picked.begin(), picked.end());
        printSubset(picked);
        return;
    }

    if(idx == K)
        return;

    checkElem[idx] = true;
    solve(idx + 1, r + 1, S, checkElem);
    checkElem[idx] = false;
    solve(idx + 1, r , S, checkElem);
}


int main(){

    while(K != 0){
        int S[MAX];
        bool checkElem[MAX] = {false,};
        cin >> K;
        for(int i    = 0 ; i < K; i++) cin >> S[i];
        solve(0,0,S,checkElem);
        cout << endl;
    }


    return 0;
}
