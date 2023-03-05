#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
  ll x,N,K,L,max = 0;
  cin >> N >> K >> L;

  for(ll j=0; j<N; j++){
      cin >> x;
      if(max <x) max = x;
      
  }
  if (x == max) cout <<"Yes\n";
  else{
      if (max >= std::max( x + K*(L-1),x))cout << "No\n";
      else cout << "Yes\n";
  }
}

int main() {
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}
