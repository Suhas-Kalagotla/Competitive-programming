#include <bits/stdc++.h>
#define ll long long
using namespace std;

int prime(int n){
  for(int i=2; i<n/2; i++){
    if(n%i==0) return 0;
  }
  return 1;
}

int spf(int n){
  for(int i=2;i<=n;i++){
    if(n%i==0 && prime(i)) return i;
  }
}

void solve(){
  int x, y;
  cin >>  x >> y;
  int ans =0;

  while(x<y){
    if(x%2!=0) x += spf(x);
    else x+=2;
    ans++;
  }
  cout <<ans <<endl;
}

int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
