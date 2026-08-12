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

  int n;
  cin >> n;
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i;
  }
  for (int i = 1; i <= n - 1; i++) {
    int x;
    cin >> x;
    sum -= x;
  }
  cout << sum << "\n";

  return 0;
}