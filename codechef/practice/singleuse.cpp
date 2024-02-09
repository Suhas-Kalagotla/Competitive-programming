#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
  int n,s,a;
  cin >> n >> s >> a;
  n -= a;
  int count =1;
  while(n>0) {
    n-=s;
    count++;
  }
cout << count << endl;
}

int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
