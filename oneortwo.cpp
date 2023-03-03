#include <bits/stdc++.h>
using namespace std;

void solve(){
  int x , y , t=1 ;
  int ans=0; 
  cin >> x >> y ;
  while(x<=0 && y<=0){

    if(t%2!=0){
      if(x<=1 && y<=1) {
        ans = 1;
          break;}

      if(x>=1 && y>=1) {
        x--;
        y--;
      } else x-=2;
    }else{
      if(x<=1 && y<=1) {
        ans = 0;
        break;
      }
      if(x>=1 && y>=1) {
        x--;
        y--;
      } else y-=2;
    }
  }

  if(ans) cout << "Chafina\n";
  else cout << "Chef\n";
}

int main(){
  int tc;
  cin >> tc;
  while(tc--) solve();
}
