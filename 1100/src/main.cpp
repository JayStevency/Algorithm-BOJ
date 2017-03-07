#include <iostream>

using namespace std;

int board[8][8]
={
  {1,0,1,0,1,0,1,0},
  {0,1,0,1,0,1,0,1},
  {1,0,1,0,1,0,1,0},
  {0,1,0,1,0,1,0,1},
  {1,0,1,0,1,0,1,0},
  {0,1,0,1,0,1,0,1},
  {1,0,1,0,1,0,1,0},
  {0,1,0,1,0,1,0,1}
};

char input;
int cnt;

int main(){

  for(int i = 0 ; i < 8; i++){
    for(int j = 0 ; j < 8; j++){
      cin >> input;
      if(input == 'F'){
        if(board[i][j])
          cnt++;
      }
    }
  }
cout << cnt << endl;
return 0;
}