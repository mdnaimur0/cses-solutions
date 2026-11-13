/*
 * Problem: Coin Piles
 * URL: https://cses.fi/problemset/task/1754
 * Date: 2026-11-13
 * Time: 22:39:55
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int a, b;
  cin >> a >> b;
  if ((a + b) % 3 == 0 && a <= 2 * b && b <= 2 * a) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
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