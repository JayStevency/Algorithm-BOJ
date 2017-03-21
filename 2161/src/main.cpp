//
// Created by jay on 2017. 3. 21..
//
#include <iostream>
#include <queue>
#include <list>
using namespace std;

int n;

list<int> l;
queue<int> q;
int main(){
    cin >> n;
    for(int i = 1; i <= n ; i++){
        l.push_back(i);
    }
    int i = 1;
    while(l.size() != 1){
        if(i % 2 == 1){
            q.push(l.front());
            l.pop_front();
        }else{
            int tmp = l.front();
            l.pop_front();
            l.push_back(tmp);
        }
        i++;
    }

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << l.front() << " ";
    return 0;
}