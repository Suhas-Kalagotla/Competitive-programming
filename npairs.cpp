#include <bits/stdc++.h>
using namespace std;

void solve(){
  string a;
  int n;
  cin >> n >> a;
/*
  9 4 2 4 1 2 3 4
  0 1 2 3 4 5 6 7
  1 1 2 3
  2 1 1 2
  3 2 1 1
  4 3 2 1
  5 4 3 2
  6 5 4 3
  */
  int j=0, i=1,count=0;
  while(j!=n){
    if(i==n) {
      i=j+1;
      j++;
    }
    int c = int(a[i])-48;
    int b = int(a[j])-48;
    if(abs(c-b) == abs(i-j) && i != j) {
      count++;
    }
    i++;
  }
  cout << count << endl;
}

int main(){
  int tc;
  cin >> tc;
  while(tc--) solve();
}
