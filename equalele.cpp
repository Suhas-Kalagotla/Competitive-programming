#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
  int n;
  cin >> n;
  int a[n];
  unordered_map<int,int> freq;
  for(int i=0; i<n; i++) {
    cin >> a[i];
    freq[a[i]]++;
  }

  int max_freq=0;
  for(auto i:freq){
    if(max_freq < i.second) {
      max_freq = i.second;
    }
  }
  cout << n - max_freq << endl;
}

int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
