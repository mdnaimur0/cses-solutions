/*
 * Problem: Bit Strings
 * URL: https://cses.fi/problemset/task/1617
 * Date: 2026-08-24
 * Time: 20:01:28
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n;
  cin >> n;
  ll ans = 1;
  ll MOD = 1e9 + 7;
  for (int i = 0; i < n; i++) {
    ans = (ans * 2) % MOD;
  }
  cout << ans;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}