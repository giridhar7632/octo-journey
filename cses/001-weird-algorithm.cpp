#include <iostream>

using namespace std;

int main() {
  long int n;
  cin >> n;
  cout << n;
  while(n != 1) {
    if((n & 1) == 0){
      n = n/2;
    } else {
      n = (n*3) + 1;
    }

    cout << " " << n;
    // O(n) O(1)
    
  }

  return 0;
}