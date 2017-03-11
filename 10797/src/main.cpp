//
// Created by jay on 2017. 3. 11..
//

#include <iostream>

using namespace std;

int main(){
    int a, cnt = 0;

    cin >> a;

    for(int i = 0 ; i < 5; i++){
      int tmp;
        cin >> tmp;
        if(tmp == a) cnt++;
    }

    cout << cnt << endl;
    return 0;
}
