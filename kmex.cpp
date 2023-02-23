#include <bits/stdc++.h>
#define ll long long
using namespace std;

int binary_search(int a[] , int key,int i, int j){
  int mid = (i+j)/2;
  if(i>j) return 0;
  if(a[mid] == key) return 1;
  else if(a[mid] < key) return binary_search(a,key,mid+1,j);
  else return binary_search(a,key,i,mid-1);

}

void solve(){
  int n,m,k,f=1;
  cin >> n>> m >> k;
  int a[n];
  for(int i=0; i<n; i++) cin >> a[i];

  if(k>m) f=0;
  sort(a,a+n);
  for(int i=0; i<k; i++){
    if(binary_search(a,i,0,n-1));
    else {
      f=0;
      break;
    }
  }
  int count =0;
  for(int i=0; i<n;i++)
    if(a[i]==k) count++;

  if(f && n-count >=m) cout << "yes\n";
  else cout << "no\n";
}

int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
