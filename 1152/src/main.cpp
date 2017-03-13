//
// Created by jay on 2017. 3. 13..
//

#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;
string srcStr;
string tmp;
int main(){
    int cnt = 0;
    int i = 0;
    getline(cin,srcStr);
    for(int i = 0; i < srcStr.size(); i++){
        char c = srcStr.at(i);
        if(tmp == "" && c != ' '){
            cnt++;
            tmp += c;
        }
        if(c == ' ')
            tmp = "";

    }
    cout << cnt << endl;

}

