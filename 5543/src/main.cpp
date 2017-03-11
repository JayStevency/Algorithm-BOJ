//
// Created by jay on 2017. 3. 11..
//

#include <iostream>
#define MAX 2000
using namespace std;

int main(){
    int cheapest_burger = MAX, cheapest_drink = MAX, tmp;
    for(int i = 0; i< 5; i++){
        cin >> tmp;
        if(i < 3) {
            if(cheapest_burger > tmp) cheapest_burger = tmp;
        } else
            if(cheapest_drink > tmp) cheapest_drink = tmp;
    }
    cout << (cheapest_burger + cheapest_drink - 50) << endl;


    return 0;
}