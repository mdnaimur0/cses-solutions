/*
 * Problem: Repetitions
 * URL: https://cses.fi/problemset/task/1069
 * Date: 2026-08-12
 * Time: 23:48:07
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;
  int n = s.size();
  int cur = 1;
  int res = 1;
  for (int i = 1; i < n; i++) {
    if (s[i - 1] != s[i])
      cur = 0;
    cur++;
    res = max(res, cur);
  }
  cout << res << "\n";

  return 0;
}