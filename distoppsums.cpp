#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
  int n;
  cin >> n;
  for(int i=n/2; i>=1;i--){
    cout << i << " ";
  }
  for(int i=n/2+1; i<=n;i++) cout << i << " "; 
  cout << endl;
}

int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
