//
// Created by jay on 2017. 4. 13..
//

#include <iostream>
#define MAX 16
using namespace std;

int n, cnt = 0;

bool board[MAX][MAX];

bool check(int row, int col) {
    for (int i = 0; i < n; i++) {
        if(i == row) continue;
        if (board[i][col]) return false;
    }

    int x = row-1;
    int y = col-1;
    while (x >= 0 && y >= 0) {
        if (board[x][y]) return false;
        x--;
        y--;
    }

    x = row - 1;
    y = col + 1;
    while (x >= 0 && y < n) {
        if (board[x][y]) return false;
        x--;
        y++;
    }

    return true;
}


void countingQueens(int row){
    if(row == n){
        cnt+=1;
    }
    for(int col = 0; col < n ; col++){
        board[row][col] = true;
        if(check(row, col)){
            countingQueens(row + 1);
        }
        board[row][col] = false;
    }


}

int main(){
    cin >> n;
    countingQueens(0);
    cout << cnt << endl;
    return 0;
}
