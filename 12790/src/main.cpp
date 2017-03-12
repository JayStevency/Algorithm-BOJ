//
// Created by jay on 2017. 3. 11..
//

#include <iostream>

using namespace std;

int t;
int main(){
    cin >> t;
    while(t--){
        int hp, mp, att, def, hp1, mp1, att1, def1;
        cin >> hp >> mp >> att >> def >> hp1 >> mp1 >> att1 >> def1;
        int result = 1*(hp + hp1 < 1 ? 1 : hp + hp1 ) + 5*(mp + mp1 < 1 ? 1 : mp + mp1) + 2*(att + att1 < 0 ? 0 : att + att1) + 2*(def + def1);
        cout << result << endl;
    }

    return 0;
}