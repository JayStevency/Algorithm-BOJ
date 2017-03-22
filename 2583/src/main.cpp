//
// Created by jay on 2017. 3. 21..
//

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#define MAX 101
using namespace std;

int board[MAX][MAX];
int n, m, k;

pair<int,int> dir[4] ={
        make_pair(1,0), make_pair(0,1),
        make_pair(-1,0), make_pair(0,-1)
};

void boardSet(int x1, int y1, int x2, int y2){
    for(int i = y1 ; i < y2; i++){
        for(int j = x1 ; j < x2; j++){
            if(board[i][j] == 1) board[i][j] = 0;
        }
    }
}

int bfs(pair<int, int> start){
    int sq = 0;
    queue<pair<int, int> > q;
    q.push(start);
    while(!q.empty()){
        pair<int, int> here = q.front();
        q.pop();
        if(board[here.first][here.second] == 1){
            sq++;
            board[here.first][here.second] = -1;
            for(int i = 0 ; i < 4; i++){
                pair<int, int> there = make_pair(here.first + dir[i].first, here.second + dir[i].second);
                if(there.first >= 0 && there.second >= 0 && there.first < n && there.second < m){
                    if(board[there.first][there.second] == 1){
                        q.push(there);
                    }
                }
            }
        } else
            continue;

    }
    return sq;
}


int main(){
    cin >> n >> m >> k;
    for(int i = 0 ;i < n; i++){
        for(int j = 0; j < m; j++)
            board[i][j] = 1;
    }
    for(int i = 0 ; i < k; i++){
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        boardSet(x1,y1,x2,y2);
    }


    vector<int> v;
    int cnt = 0;
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j<m; j++){
            if(board[i][j] == 1){
                v.push_back(bfs(make_pair(i,j)));
                cnt++;

            }
        }
    }

    sort(v.begin(), v.end());
    cout << cnt << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}