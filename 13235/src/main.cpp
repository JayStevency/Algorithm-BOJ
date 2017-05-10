//
// Created by jay on 2017. 5. 10..
//

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


bool checkPalindrome(string &str){
    string reverse_str = str;
    reverse(reverse_str.begin(),reverse_str.end());
    for(int i = 0 ;i < str.size();i++){
        if(str[i] != reverse_str[i]) return false;
    }
    return true;
}

int main(){

    string str;
    bool check_str = false;
    cin >> str;

    if(str.size() == 1){
        check_str = true;
    }else{
        if(checkPalindrome(str)){
            check_str = true;
        }
    }

    cout << (check_str ? "true":"false") << endl;

    return 0;
}