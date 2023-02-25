#include <bits/stdc++.h>
#define ll long long
using namespace std;

void print_arr(map<int,int> freq){
  map<int,int>::iterator it;
  for(it=freq.begin(); it!=freq.end(); it++){
      cout << it->first << " " ;
      it->second = it->second -1 ;
  }

  map<int,int>::reverse_iterator i;
  for( i=freq.rbegin(); i!=freq.rend(); i++){
    if(i->second!=0){
      cout << i->first << " ";
      i->second = i->second - 1 ;
    }
  }
  cout << endl;
}

void solve(){
  int n;
  cin >> n;
  int a[n];
  map<int,int>freq;
  int max=0; ;
  for(int i=0; i<n; i++) {
    cin >> a[i];
    freq[a[i]]++;
    if(a[i] > max) max = a[i];
  }

  for(int i=0; i<n; i++){
    if(freq[a[i]] >=3) {
      cout << "NO\n";
      return ;
    }
  }
  if(freq[max]>1) cout << "NO\n";
  else {
    cout <<  "YES\n";
    print_arr(freq);
  }


}

int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
