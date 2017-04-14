//
// Created by jay on 2017. 4. 11..
//

#include <iostream>
#define MAX 20

using namespace std;

int n, m, k, x, y;

int board[MAX][MAX];
//0: #, 1: front, 2: back, 3: left, 4: right, 5: up, 6: down

int dice[7];
int dice_clone[7];
/*
pair<int,int> dice[7] = {
       make_pair(0,0),
       make_pair(1,0),
       make_pair(2,0),
       make_pair(3,0),
       make_pair(4,0),
       make_pair(5,0),
       make_pair(6,0)
};
pair<int,int> dice_clone[7] = {
        make_pair(0,0),
        make_pair(1,0),
        make_pair(2,0),
        make_pair(3,0),
        make_pair(4,0),
        make_pair(5,0),
        make_pair(6,0)
};
*/

void swap(int i, int j){
    dice_clone[j] = dice[i];
}

//oper east : 1, west : 2, north : 3, south : 4;
void go(int oper){
    if(oper == 1){
        swap(1,3);
        swap(3,6);
        swap(6,4);
        swap(4,1);
        swap(2,2);
        swap(5,5);
    }else if(oper == 2){
        swap(1,4);
        swap(4,6);
        swap(6,3);
        swap(3,1);
        swap(2,2);
        swap(5,5);
    }else if(oper == 3){
        swap(5,1);
        swap(1,2);
        swap(2,6);
        swap(6,5);
        swap(3,3);
        swap(4,4);
    }else if(oper == 4){
        swap(5,6);
        swap(6,2);
        swap(2,1);
        swap(1,5);
        swap(3,3);
        swap(4,4);
    }

    for(int i = 0 ; i < 7; i++){
        dice[i] = dice_clone[i];
    }
    if(board[x][y] == 0){
        board[x][y] = dice[6];
    }else{
        dice[6] = board[x][y];
        board[x][y] = 0;
    }

    cout << dice[1] << endl;
}

int main(){
    cin >> n >> m >> x >> y >> k;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cin >> board[i][j];
    }
    for(int i = 0 ; i < k; i++){
        int oper;
        cin >> oper;
        switch (oper){
            case 1:
                y++;
                if(y >= m){
                    y--;
                    continue;
                }
                break;
            case 2:
                y--;
                if(y < 0){
                    y++;
                    continue;
                }
                break;
            case 3:
                x--;
                if(x < 0){
                    x++;
                    continue;
                }
                break;
            case 4:
                x++;
                if(x >= n){
                    x--;
                    continue;
                }
                break;
        }
        go(oper);

    }


    return 0;
}