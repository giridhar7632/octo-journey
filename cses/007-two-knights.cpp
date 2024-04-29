#include<iostream>

#define ll long long

using namespace std;

int main() {
  ll N;
  cin >> N;
  // mathematics
  // no of positions a knight can be placed: n*n
  // no of positions the second knight can be placed: n*n - 1
  // total no of positiond: (n*n) * (n*n - 1) / 2 (since identical permutations)
  // no of attacking positions: count no of 3x2 and 2x3 spaces on the board
  // no of 3x2: (n-1)(n-2) horz*verti
  // lly no of 2x3: (n-2)(n-1) horz*verti
  // total positions a knight can attack on nxn board: 2 * (n-1)(n-2)
  // for two knights: 2 * 2 * (n-1)(n-2)

  for(ll n = 1; n <=N; ++n) {
    ll totalPositions = (n*n) * (n*n-1) / 2;
    ll attackPositions = 4 * (n-1) * (n-2);

    cout << totalPositions - attackPositions << endl;
  }
}