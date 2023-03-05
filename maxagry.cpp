#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
  ll n ,k;
  cin >> n >> k;
  ll ans = n*(n-1)/2;
  if(k<n/2){
    n= n-2*k;
    ans-= n*(n-1)/2;
  }
  cout <<ans <<endl;
}


int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
