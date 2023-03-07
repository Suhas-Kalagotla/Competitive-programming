#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
  int n;
  cin >> n;
  string a;
  cin >> a;

  int freq=0,max_freq=0,start=0,j=0;

  while(a[j]=='1'){
    j++;
    start++; 
  }
  for(int i=j; i<n; i++){
    if(a[i]=='1') {
      freq++;
      max_freq=max_freq <= freq ? freq : max_freq;
    }
    else freq=0;
  }
  cout << max_freq + start <<endl;
}

int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
