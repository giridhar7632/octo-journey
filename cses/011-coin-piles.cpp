#include<iostream>

using namespace std;

int main() {
    long n;
    cin >> n;
    while(n != 0) {
      int a, b;
      cin >> a >> b;
      if((a + b) % 3 == 0 && min(a, b)*2 >= max(a,b)) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
      n--;
    }
    return 0;
}
