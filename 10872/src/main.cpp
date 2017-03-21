//
// Created by jay on 2017. 3. 21..
//
#include <iostream>
#define MAX 13
using namespace std;

long long int dp[MAX] = {1,};


long long int Factorial(int n){
    dp[0] = 1;
    for(int i = 1; i <=n ; i++)
        dp[i] = i*dp[i-1];
    return dp[n];
}

int main(){
    int n;
    cin >> n ;
    cout << Factorial(n) <<endl;
    return 0;
}
