#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
  int n;
  cin >> n;

  if(n%2!= 0 ) {
    cout << -1<< endl;
  }else{
    for(int i=1;i<n; i+=2){
      cout << i+1 << " " << i << " " ;
    }
    cout << endl;
  }
}

int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
