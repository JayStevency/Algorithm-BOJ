//
// Created by jay on 2017. 3. 10..
//

#include <iostream>

using namespace std;

int n;
int main(){
    cin >> n;

    switch (n/10){
        case 10:
        case 9:
            cout << "A" << endl;
            break;
        case 8:
            cout << "B" << endl;
            break;
        case 7:
            cout << "C" << endl;
            break;
        case 6:
            cout << "D" << endl;
            break;
        default:
            cout << "F" <<endl;
            break;
    }

    return 0;
}