//
// Created by jay on 2017. 4. 13..
//

#include <iostream>
#define MAX 1001
#define MOD 1000000007

using namespace std;

long long dp[MAX][MAX];

int n,m;

void solve(){
    dp[0][0] = 1;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            dp[i][j] = (dp[i-1][j] + dp[i-1][j-1] + dp[i][j-1])%MOD;
        }
    }
}


int main(){

    cin >> n >> m;

    solve();

    cout << dp[n][m] << endl;

    return 0;
}