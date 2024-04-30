#include<iostream>

using namespace std;

int main() {
    long n, current = 5, answer = 0;
    cin >> n;
    // the number of 5's in n!
    while (current <= n) {
        answer += n / current;
        current *= 5;
    }
    cout << answer << endl;
    return 0;
}
