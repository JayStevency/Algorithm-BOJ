//
// Created by jay on 2017. 4. 15..
//

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define MAX_N 1001
#define INF 0x3f3f3f3f
using namespace std;

vector<vector<int> >adj;

int n, e, s;
vector<bool> visited;



void dfs(int here){
    cout << here << " ";

    visited[here] = true;

    for(int i = 0 ; i < adj[here].size(); i++){
        int there = adj[here][i];
        if(!visited[there]){
            dfs(there);
        }
    }
}

void bfs(int start){
    queue<int> q;
    vector<int> dist(n+1);
    for(int i = 1;i <= n; i++) dist[i] = -1;
    q.push(start);
    dist[start] = 0;
    while(!q.empty()){
        int here = q.front();
        q.pop();
        cout << here << " ";
        for(int i = 0; i < adj[here].size(); i++){
            int there = adj[here][i];
            if(dist[there] < 0){
                q.push(there);
                dist[there] = dist[here] + 1;
            }
        }
    }
}

int main(){
    cin >> n >> e >> s;
    visited = vector<bool>(n+1, false);
    adj = vector<vector<int> >(n+1);
    for(int i = 0; i < e; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i = 1; i <= n; i++){
        sort(adj[i].begin(), adj[i].end());
    }
    dfs(s);
    for(int i = 1; i <= n; i++){
        if(!visited[i]) dfs(i);
    }
    cout << endl;
    bfs(s);

    return 0;
}