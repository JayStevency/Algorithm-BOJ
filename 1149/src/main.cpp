//
// Created by jay on 2017. 3. 21..
//

#include <iostream>
#define MAX_N 1001

using namespace std;

int cost[MAX_N][3];
int dp[MAX_N][3];
int n;


int solve(int N, int k){
    if(N == n) return 0;

    if(dp[N][k] != 0) return dp[N][k];

    else if(k == 0){
        return dp[N][k] = min(solve(N+1,k + 1),solve(N+1,k + 2)) + cost[N][k];
    }else if(k == 1){
        return dp[N][k] = min(solve(N+1, k-1), solve(N+1, k + 1)) + cost[N][k];
    }else{
        return dp[N][k] = min(solve(N+1, k-2), solve(N+1, k-1)) + cost[N][k];
    }

}


int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0 ; j < 3; j++){
            cin >> cost[i][j];
        }
    }

    cout << min(min(solve(0,0),solve(0,1)),solve(0,2)) << endl;

    return 0;
}