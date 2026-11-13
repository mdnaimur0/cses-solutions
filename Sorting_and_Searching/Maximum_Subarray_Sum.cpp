/*
 * Problem: Maximum Subarray Sum
 * URL: https://cses.fi/problemset/task/1643
 * Date: 2026-11-13
 * Time: 23:46:19
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
  vi v(n);
  for (int& x : v) cin >> x;
  ll ans = INT_MIN, sum = 0;
  for (int x : v) {
    sum = max((ll)x, sum + x);
    ans = max(ans, sum);
  }
  cout << ans;

  return 0;
}