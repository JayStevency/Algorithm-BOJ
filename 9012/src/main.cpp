#include <iostream>
#include <stack>

using namespace std;
int n;

string input;


bool isVPS(string input){
  stack<char> st;
  for(int i = 0; i< input.size(); i++){
    if(input.at(i) == '(')
       st.push(input.at(i));
    else{
      if(st.empty()){
        st.push(input.at(i));
        continue;
      }else if(st.top() == '('){
        st.pop();
      }else
        st.push(input.at(i));
    }
  }
  return (st.empty() ? true : false);
}

int main(){
  cin >> n;
  for(int i = 0; i < n ; i++){
    cin >> input; 
    if(isVPS(input))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}