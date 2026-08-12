/*
 * Problem: Increasing Array
 * URL: https://cses.fi/problemset/task/1094
 * Date: 2026-08-13
 * Time: 00:45:45
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n = 1, i, c = 0, t;
  cin >> n;

  vector<ll> v(n);
  for (i = 0; i < n; i++) {
    cin >> v[i];
    if (i > 0 && v[i] < v[i - 1]) {
      t = v[i - 1] - v[i];
      c += t;
      v[i] += t;
    }
  }
  cout << c;

  return 0;
}