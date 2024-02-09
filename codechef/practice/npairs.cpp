#include <bits/stdc++.h>
using namespace std;

void solve(){
  string a;
  int n;
  cin >> n >> a;
/*
  9 4 2 4 1 2 3 4 2 0 8
  0 1 2 3 4 5 6 7 8 9 10
  1 1 2 3
  2 1 1 2
  3 2 1 1
  4 3 2 1
  5 4 3 2
  6 5 4 3
  */
  int count=0;
  /*
  while(j!=n){
    if(i==9 || i > n) {
      i=j+1;
      j++;
    }
    int c = int(a[i])-48;
    int b = int(a[j])-48;
    if(abs(c-b) == abs(i-j) && i != j) {
      count++;
    }
    i++;
  }*/
  for(int i=0; i<n; i++){
    for(int j=i+1; j<=i+9 && j<n;j++){
      if(abs(a[i] - a[j]) == abs(i-j)) count++;
    }
  }
  cout << count << endl;
}

int main(){
  int tc;
  cin >> tc;
  while(tc--) solve();
}
