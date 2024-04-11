#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];

  for (int& ele : arr)
  {
    ele = 0;
  }

  for(int i = 0; i < n - 1; i++) {
    int tmp;
    cin >> tmp;
    
    arr[tmp - 1] = tmp;
    
  }

  for (int i = 0; i < n; i++)
  {
    if(!arr[i]) {
      cout << i + 1;
      break;
    }
  }
  // this approach: O(n) O(n)
  // another approach: expected_sum - sum (no use of arrays. O(n) O(1))

  return 0;
}
