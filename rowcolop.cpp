#include <bits/stdc++.h>
using namespace std;

int main(){
  int n , q;
  cin >> n >> q;
  int row[n]={0} , column[n]={0};
  while(q--) {
    string s;
    cin >> s;
    int k,v;
    cin >> k >> v;
    char c=s[0];
    if(c=='R'){
      row[k] += v;
    } else{
      column[k] += v;
    }
  };
  int mr=0,mc=0;
  for(int i=0; i<n; i++){
    mr = max(row[i],mr);
    mc = max(column[i], mc);
  }
  cout << mr + mc << endl;

}
