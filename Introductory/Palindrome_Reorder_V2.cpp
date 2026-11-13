/*
 * Problem: Palindrome Reorder
 * URL: https://cses.fi/problemset/task/1755
 * Date: 2026-11-13
 * Time: 23:30:02
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;

  map<char, int> count;
  for (auto c : s) {
    count[c]++;
  }

  int odds = 0;
  char center;
  for (char c = 'A'; c <= 'Z'; c++) {
    if (count[c] % 2 == 1) {
      odds++;
      center = c;
    }
  }

  if (odds > 1) {
    cout << "NO SOLUTION\n";
  } else {
    for (char c = 'A'; c <= 'Z'; c++) {
      cout << string(count[c] / 2, c);
    }
    if (odds) {
      cout << center;
    }
    for (char c = 'Z'; c >= 'A'; c--) {
      cout << string(count[c] / 2, c);
    }
    cout << "\n";
  }

  return 0;
}