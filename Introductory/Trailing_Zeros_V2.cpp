/*
 * Problem: Trailing Zeros
 * URL: https://cses.fi/problemset/task/1618
 * Date: 2026-11-13
 * Time: 22:35:21
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  int ans = 0;
  for (int i = 5; i <= n; i *= 5) {
    ans += n / i;
  }
  cout << ans << "\n";

  return 0;
}