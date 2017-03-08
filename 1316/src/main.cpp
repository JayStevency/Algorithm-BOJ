//
// Created by jay on 2017. 3. 8..
//
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int cnt, N;

bool hasVector(vector<char> &v, char x){
    for(int i = 0 ; i < v.size(); i++){
        if(v[i] == x)
            return true;
    }
    return false;
}



bool isGroupWords(string str){
    vector<char> v;
    char tmp = str.at(0);
    v.push_back(tmp);
    for(int i = 1 ; i < str.size();){
        if(tmp == str.at(i)){
            i++;
        }else if(!hasVector(v,str.at(i))){
            tmp = str.at(i);
            v.push_back(tmp);
        }else
            return false;
    }

    return true;
}


int main(){
    cin >> N;
    for(int i = 0; i < N; i++){
        string str;
        cin >> str;
        if(isGroupWords(str))
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
