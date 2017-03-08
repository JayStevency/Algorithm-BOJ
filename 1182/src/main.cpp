#include <iostream>

#define MAX 21

using namespace std;


int N, S, cnt;
int set[MAX];

void dfs(int idx, int sum){
  cout << set[idx] << endl;
  if(idx >= N){
    if(sum == S) cnt++;
    return;
  }
  dfs(idx+1, sum);
  dfs(idx+1, sum + set[idx]);
}


int main(){

  cin >> N >> S;
  for(int i = 0 ; i < N ; i++){
    cin >> set[i];
  }

  dfs(1,0);
  dfs(1,set[0]);

  if(S == 0) cnt--;

  cout << cnt << endl;

  return 0;
}