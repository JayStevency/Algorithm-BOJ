//
// Created by jay on 2017. 3. 13..
//

#include <iostream>


using namespace std;

string str1;
string str2;
int main(){
    cin >> str1;
    for(int i = 0 ;i < str1.size(); i++){
        char c = str1.at(i);
        str2 += 'A'+(c-'A' - 3 > 0 ? c-'A' - 3 : 26 + c-'A' - 3)%26;
    }
    cout << str2 << endl;
    return 0;
}