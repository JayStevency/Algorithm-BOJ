//
// Created by jay on 2017. 3. 12..
//

#include <iostream>
#define MAX 1001

using namespace std;
int a[MAX];
int dp[MAX];
int n;

int solve(){
    int maxVal = 0;
    for(int i = 1; i <= n ; i++){
        int maxDp = 0;
        for(int j = 0 ; j < i; j++){
            if(a[i] > a[j]){
                if(maxDp < dp[j]){
                    maxDp = dp[j];
                }
            }
        }
        dp[i] = maxDp + a[i];
        if(maxVal < dp[i])
            maxVal = dp[i];
    }
    return maxVal;
}
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    cout << solve() << endl;

    return 0;
}