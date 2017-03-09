#include <iostream>
#include <string>

using namespace std;

int cnt;





bool isHansu(int n){
  if(1000 > n && n > 100){
    int first = n/100, second = (n-first*100)/10, third = (n-(first*100+second*10));
    if(first - second == second - third){
        return true;
    }
    else
      return false;
  }else if(n < 100) return true;
  else {
    return false;
  }
}


void solve(int n){
  if(n < 10){
    cnt += n;
    return;
  }else if(n <= 1000){
    if(isHansu(n)) cnt++;
  }
  solve(n - 1);
}


int main(){
  int n;
  cin >> n;
  solve(n);
  cout << cnt << endl;
  return 0;
}