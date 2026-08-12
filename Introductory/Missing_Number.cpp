/*
 * Problem: Missing Number
 * URL: https://cses.fi/problemset/task/1083
 * Date: 2026-08-12
 * Time: 22:22:14
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, ans, i;
  cin >> n;

  vector<ll> v(n - 1);
  for (i = 0; i < n - 1; i++)
    cin >> v[i];

  sort(v.begin(), v.end());

  if (v.front() != 1) {
    ans = 1;
  } else if (v.back() != n) {
    ans = n;
  } else {
    for (i = 1; i < v.size(); i++) {
      if (v[i] - v[i - 1] == 2) {
        ans = v[i] - 1;
        break;
      }
    }
  }
  cout << ans;

  return 0;
}