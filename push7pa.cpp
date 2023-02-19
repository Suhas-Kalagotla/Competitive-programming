#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
  int n;
  cin >> n;
  int a[n];
  map<int,int>freq;
  for(int i=0; i<n; i++) {
    cin >> a[i];
    freq[a[i]]++;
  }
  int count =0;
  for(auto i: freq){
    int val = i.first + i.second -1;
    count = (count > val) ? count : val ;
  }
  cout << count << endl;
}



int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
