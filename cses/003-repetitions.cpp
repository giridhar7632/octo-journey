#include<iostream>
#include<string>

using namespace std;

int main() {
  string str;
  cin >> str;
  long long max_length = 0, x = 0, n = (long long)str.length();

  // two pointer sliding window
  char i, j;
  while(x < n) {
    i = str[x];
    long long y = 0;
    for(; y < n; y++) {
    j = str[x + y];
    if(i != j)
      break;
    }
    if(max_length < y) {
      max_length = y;
    }

    x += y;
  }
  cout << max_length;

  // O(n) O(1)

  return 0;
}