#include <bits/stdc++.h>
using namespace std;

void solve(){
  int x , y;
  int ans=0;
  cin >> x >> y ;

  if(x==y){
    if(x%2 != 0 ){
      cout << "Chef\n";
      return;
    }else {
      cout << "Chefina\n";
      return ;
    }
  }
  int diff = abs(x-y);
  if(x>y && diff>=2){
    cout << "Chef\n";
    return;
  }else if(diff>=2 && y>x){
    cout << "Chefina\n";
    return;
  }

  if(x%2!=0 && x>y){
    cout << "chefina\n";
    return;
  }
  else if(x%2==0 && x>y){
    cout << "Chef\n";
    return;
  }
  else if(y%2==0 && y >x){
    cout << "Chef\n";
  }
  else if(y%2!=0 && y>x){
    cout << "Chefina\n";
    return; 
  }
}

int main(){
  int tc;
  cin >> tc;
  while(tc--) solve();
}
