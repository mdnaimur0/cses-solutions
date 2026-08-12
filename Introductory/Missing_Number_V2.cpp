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
  vector<bool> seen(n + 1);
  for (int i = 1; i <= n - 1; i++) {
    int x;
    cin >> x;
    seen[x] = true;
  }
  for (int i = 1; i <= n; i++) {
    if (!seen[i]) {
      cout << i << "\n";
    }
  }

  return 0;
}