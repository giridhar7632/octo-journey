#include <iostream>
#include <vector>

using namespace std;

int main() {
  long n;
  cin >> n;

  if(n > 1 && n <= 3)  {
    cout << "NO SOLUTION";
    return 0;
  }
  vector<long> arr(n);
  for(long i = 2; i <= n; i+=2) {
    cout << i << ' ';
  }
  for(long i = 1; i <= n; i+=2) {
    cout << i << ' ';
  }

  return 0;
}