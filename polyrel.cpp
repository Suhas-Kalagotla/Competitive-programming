#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin >> n;
  int t =n;
  while(t--){
    int a , b;
    cin >> a >> b;
  }

  int sum =0;
  while(n>2){
    sum += n;
    n /= 2;
  }
  cout << sum << endl;
}

int main(){
  int tc;
  cin >> tc;
  while(tc--) solve();
}
