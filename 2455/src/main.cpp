//
// Created by jay on 2017. 3. 12..
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main(){

    int a =1, b=1, i = 0;
    vector<int> v;
    while (b != 0){
        cin >> a >> b;
        if(v.empty())
            v.push_back(b);
        else{
            v.push_back(v[i-1] - a + b);
        }
        i++;
    }

    sort(v.begin(),v.end());
    cout << v[v.size() - 1] << endl;

    return 0;
}