#include<iostream>
#include<vector>

using namespace std;

int main() {

  long n;
  cin >> n;
  vector<pair<long long, long long> > arr(n);

  for(int i = 0; i < n; i++) {
    long long x, y;
    cin >> y >> x;

    long long max_num = max(x, y);
    long long max_sq = max_num * max_num;
    long long inn_sq = (max_num-1) * (max_num-1);

    if((max_num&1) == 0) {
      cout << (x > y ? inn_sq + y : max_sq - x + 1) << endl;
    } else {
      cout << (x > y ? max_sq - y + 1 : inn_sq + x) << endl;
    }
  }

  return 0;
}