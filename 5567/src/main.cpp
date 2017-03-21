//
// Created by jay on 2017. 3. 21..
//

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, m;

void bfs(int start, vector<vector<int> > &adj, vector<int> &dist){
    queue<int> q;
    dist[start] = 0;
    q.push(start);
    while(!q.empty()){
        int here = q.front();
        q.pop();
        for(int i = 0; i < adj[here].size(); ++i){
            int there = adj[here][i];

            if(dist[there] == -1){
                q.push(there);
                dist[there] = dist[here] + 1;
            }
        }
    }
}


int main(){
    cin >> n >> m;
    vector<vector<int> > adj(n+1);
    vector<int> dist(n+1);
    for(int i = 1 ;i < dist.size(); i++)
        dist[i] = -1;
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    bfs(1, adj, dist);
    int cnt = 0;
    for(int i = 1 ; i <= dist.size(); i++){
        if(dist[i] > 0 && dist[i] <=2) cnt++;
    }
    cout << cnt << endl;
    return 0;
}