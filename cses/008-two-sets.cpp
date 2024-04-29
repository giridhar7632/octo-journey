#include<iostream>
#include<vector>
#define ll long long

using namespace std;

int main() {
  ll N;
  cin >> N;

  ll total = N*(N+1) / 2;
  if(total%2 == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
    return 0;
  }

  vector<ll> fs;
  vector<ll> sc;
  ll hfSum = total / 2;
  ll sum = 0;
  for(ll i = N; i > 0; --i) {
    sum += i;
    if(sum > hfSum) {
      sum -= i;
      sc.push_back(i);
    } else {
      fs.push_back(i);
    }
  }

  cout << fs.size() << endl;
  for(auto i: fs) {
    cout << i << " ";
  }
  cout << endl << sc.size() << endl;
  for(auto i: sc) {
    cout << i << " ";
  }
}