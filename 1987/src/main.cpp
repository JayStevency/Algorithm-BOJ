//
// Created by jay on 2017. 4. 15..
//

#include <iostream>
#include <vector>
#define MAX 21

using namespace std;

pair<int,int> dir[4] = {
        make_pair(1,0),
        make_pair(-1,0),
        make_pair(0,1),
        make_pair(0,-1)
};
int r,c;

char board[MAX][MAX];
int backtracking(pair<int,int> here, vector<bool> &v){
    int cnt = 0;

    for(int i = 0 ;i < 4; i++){
        pair<int,int> there = make_pair(here.first + dir[i].first, here.second + dir[i].second);
        if(there.first >= 1 && there.second >= 1 && there.first <= r && there.second <= c){
            if(v[board[there.first][there.second] - 'A'] == false){
                v[board[there.first][there.second] - 'A'] = true;
                int next = backtracking(there,v);
                if(cnt < next) cnt = next;
                v[board[there.first][there.second] - 'A'] = false;
            }
        }
    }
    return cnt + 1;
}

int main(){
    cin >> r >> c;
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            cin >> board[i][j];
        }
    }


    vector<bool> v = vector<bool>(26, false);
    v[board[1][1]-'A'] = true;
    cout << backtracking(make_pair(1,1),v) << endl;

    return 0;
}