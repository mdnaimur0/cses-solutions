/*
 * Problem: Number Spiral
 * URL: https://cses.fi/problemset/task/1071
 * Date: 2026-08-13
 * Time: 12:10:06
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  ll x, y, result;
  cin >> y >> x;

  if (x == 1 && y == 1) {
    cout << 1 << endl;
    return;
  }
  if (x > y) {
    if (x % 2) {
      result = x * x;
      result -= (y - 1);
    } else {
      result = x * x - 2 * x + 2;
      result += (y - 1);
    }
  } else {
    if (y % 2) {
      result = y * y - 2 * y + 2;
      result += (x - 1);
    } else {
      result = y * y;
      result -= (x - 1);
    }
  }
  cout << result << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}