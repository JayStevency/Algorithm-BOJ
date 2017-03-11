//
// Created by jay on 2017. 3. 11..
//

#include <iostream>
#include <stack>
#include <queue>

#define MAX 51

using namespace std;

pair<int, int> dir[9]=
        {
                make_pair(1,0),make_pair(0,1),make_pair(-1,0),make_pair(0,-1)
                ,make_pair(1,1),make_pair(1,-1),make_pair(-1,1),make_pair(-1,-1)
        };


int board[MAX][MAX];
bool visited[MAX][MAX];
int w = 1, h = 1;


void dfs(pair<int, int> here){
    visited[here.first][here.second] = true;
    for(int i = 0 ; i < 8; i++){
        pair<int, int> there = make_pair(here.first + dir[i].first, here.second + dir[i].second);
        if(there.first > 0 && there.second > 0 && there.first <= h && there.second <= w ){
            if(board[there.first][there.second] == 1 && !visited[there.first][there.second])
                dfs(there);
        }
    }
}


int dfsAll(int w, int h){
    int cnt = 0;
    for(int i= 1; i <= h ; i++){
        for(int j = 1; j <= w; j++){
            if(!visited[i][j] && board[i][j] == 1){
                dfs(make_pair(i,j));
                cnt++;
            }
        }
    }
    return cnt;
}



int main(){
    while(1){
        cin >> w >> h;
        if(w == 0 && h == 0) break;
        for(int i = 1 ; i <= h; i++){
            for(int j = 1; j <= w; j++){
                cin >> board[i][j];
                visited[i][j] = false;
            }
        }
        cout << dfsAll(w, h) << endl;
    }
    return  0;
}