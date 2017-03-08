//
// Created by jay on 2017. 3. 8..
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int height[9];
vector<int> v;
bool checkBool[9];
void solve(int n, int r){
    if(r == 7){
        int totalHeight = 0;
        for(int i = 0; i < 9 ;i++){
            if(checkBool[i]){
                totalHeight += height[i];
            }
        }
        if(totalHeight == 100){
            for(int i = 0; i < 9; i++)
                if(checkBool[i]) v.push_back(height[i]);
        }
        return;
    }

    if(n == 9) return;
    solve(n + 1 , r);
    checkBool[n] = true;
    solve(n + 1, r + 1);
    checkBool[n] = false;
}


int main(){

    for(int i = 0; i < 9; i++)
        cin >> height[i];

    solve(0,0);

    sort(v.begin(),v.end());
    for(int i = 0 ; i < 7; i++){
        cout << v[i] << endl;
    }

    return 0;
}
