#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
  int n;
  cin >> n;
  int a[n];
  unordered_map<int,int>freq;

  for(int i=0; i<n; i++) {
    cin >> a[i];
    freq[a[i]]++;
  }

  unordered_map<int,int>::iterator i;
  int count =0;
  for(i = freq.begin(); i!=freq.end(); i++){
    if(i->second%2!=0) {
      count++;
      n++;
    }
  }
  if(n%4!=0) count += 4-(n%4);
  cout << count << endl;
}


int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
