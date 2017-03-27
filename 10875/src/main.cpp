//
// Created by jay on 2017. 3. 26..
//

#include <iostream>
#include <vector>
#include <queue>

#define MAX_N 1000

using namespace std;


pair<int, int> L_DIR[4] = {
        make_pair(0,1),make_pair(-1,0),
        make_pair(0,-1),make_pair(1,0)
};
pair<int, int> R_DIR[4] = {
        make_pair(0,-1),make_pair(1,0),
        make_pair(0,1),make_pair(-1,0)
};

pair<int, int> DIR[4] = {
        make_pair(1,0),
        make_pair(0,1),
        make_pair(-1,0),
        make_pair(0,-1),
};


int L, N, T, J;
int oper[MAX_N][2];
vector<pair<pair<int,int>, pair<int,int> > > vector1;
//v : 방향 (0:R, 1:U, 2:L, 3:D)
int calVector(int cur, int dir){
    int ret = 0;
    //dir 0 == L dir 1 == R
    if(dir == 0){
        ret = cur + 1;
        return ret % 4;
    }else{
        ret = cur - 1;
        return (ret < 0 ? ret + 4 : ret % 4);
    }
}

bool isExist(pair<int, int> x){
    for(int i = 0; i < vector1.size(); i++){
        if(vector1[i].first == x.first && vector1[i].second == x.second)
            return true;
    }
    return false;
}

//cur : 현재 좌표, i : 사용할 operation 인덱스, t : 걸린 시간, v : 방향 (0:R, 1:U, 2:L, 3:D)
void isBaMM(pair<int, int> cur, int i, int v){
    if(cur.first > L || cur.first < -L || cur.second > L || cur.second < -L || isExist(cur))
        return ;


    vector1.push_back(cur);

    pair<int, int> there;

    if(J == T){
        //oper[i][0] == L
        //oper[i][1] == R
        int d = oper[i][1];
        J += oper[i][0];
        i++;
        switch (d){
            case 0:
                there = make_pair(cur.first + L_DIR[v].first, cur.second + L_DIR[v].second);
                T++;
                isBaMM(there,i,calVector(v,d));
                break;
            case 1:
                there = make_pair(cur.first + R_DIR[v].first, cur.second + R_DIR[v].second);
                T++;
                isBaMM(there,i,calVector(v,d));
                break;
        }
    }else {
        there = make_pair(cur.first + DIR[v].first, cur.second + DIR[v].second);
        T++;
        isBaMM(there,i,v);
    }
}


int main(){
    cin >> L >> N;
    for(int i = 0 ; i < N; i++){
        char tmp;
        cin >> oper[i][0];
        cin >> tmp;
        if(tmp == 'L') oper[i][1]=0;
        else if(tmp == 'R') oper[i][1]=1;
    }

    J = oper[0][0];
    isBaMM(make_pair(0,0),1,0);
    cout << T << endl;
    return 0;
}