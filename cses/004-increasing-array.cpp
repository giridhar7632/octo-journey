#include <iostream>
#include <vector>

using namespace std;

int main() {
  long n;
  cin >> n;
  vector<long> arr(n);
  
  for(long i = 0; i < n; i++) {
    cin >> arr[i];
  }

  long long min_operations = 0;
  for(long i = 0; i < n - 1; i++) {
    if(arr[i] > arr[i + 1]) {
      min_operations += arr[i] - arr[i + 1];
      arr[i+1] = arr[i];
    }
  }

  cout << min_operations;


  return 0;
}