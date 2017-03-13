//
// Created by jay on 2017. 3. 12..
//

#include <iostream>
#include <queue>
using namespace std;

int test_case;
int n, m;
int main(){
    cin >> test_case;

    while(test_case--){
        cin >> n >> m;
        queue<pair<int,int> > q;
        priority_queue<int> pq;
        for(int i = 0 ; i < n ; i++){
            int tmp;
            cin >> tmp;
            q.push(make_pair(i,tmp));
            pq.push(tmp);
        }

        int idx = 0;
        while (!q.empty()){
            int priori = q.front().second;
            int rd = q.front().first;
            q.pop();
            if(pq.top() == priori){
                idx++;
                pq.pop();
                if(rd == m) break;
            } else
                q.push(make_pair(rd, priori));

        }
        cout << idx << endl;

    }

    return 0;
}