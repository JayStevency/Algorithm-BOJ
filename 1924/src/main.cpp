//
// Created by jay on 2017. 3. 10..
//

#include <iostream>

using namespace std;

int MON_DATE[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

int x, y;

int main(){

    cin >> x >> y;

    int total_date = 0;

    for(int i = 0; i < x; i ++){
        total_date += MON_DATE[i-1];
    }

    total_date += y;

    switch (total_date%7){
        case 0:
            cout << "SUN" << endl;
            break;
        case 1:
            cout << "MON" << endl;
            break;
        case 2:
            cout << "TUE" << endl;
            break;
        case 3:
            cout << "WED" << endl;
            break;
        case 4:
            cout << "THU" << endl;
            break;
        case 5:
            cout << "FRI" << endl;
            break;
        case 6:
            cout << "SAT" << endl;
            break;
    }

    return 0;
}