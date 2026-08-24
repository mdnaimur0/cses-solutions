/*
 * Problem: Two Knights
 * URL: https://cses.fi/problemset/task/1072
 * Date: 2026-08-24
 * Time: 19:26:13
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

ll nCr(ll n, ll r) {
  if (r > n - r)
    r = n - r;

  ll ans = 1;
  for (ll i = 1; i <= r; i++) {
    ans = ans * (n - r + i) / i;
  }
  return ans;
}

void solve() {
  int n;
  cin >> n;
  cout << 0 << endl;
  for (int i = 2; i <= n; i++) {
    cout << (nCr(i * i, 2) - 4 * (i - 2) * (i - 1)) << endl;
  }
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