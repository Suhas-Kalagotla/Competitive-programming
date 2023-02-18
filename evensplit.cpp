#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin >> n;
  string s1;
  cin >> s1;

  int zero =0 , one=0;

  for(int i=0; i<n; i++) {
    if(s1[i]=='0') zero++;
    else one++;
  }
  if(s1 =="10") {
    cout << "10" << endl;
    return ;
  }
  for(int i=0; i<zero; i++) cout << "0";
  for(int i=0; i<one; i++) cout << "1";
  cout << endl;
}

int main(){
  int tc;
  cin >> tc;
  while(tc--) solve();
}
