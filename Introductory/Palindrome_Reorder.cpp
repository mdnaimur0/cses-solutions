/*
 * Problem: Palindrome Reorder
 * URL: https://cses.fi/problemset/task/1755
 * Date: 2026-11-13
 * Time: 23:30:02
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;
  int n = s.size();
  int i, j;
  for (i = 0; i < n / 2; i++) {
    if (s[i] != s[n - 1 - i]) {
      for (j = i + 1; j < n - 1 - i; j++) {
        if (s[j] == s[i]) {
          swap(s[j], s[n - 1 - i]);
          break;
        } else if (s[j] == s[n - 1 - i]) {
          swap(s[j], s[i]);
          break;
        }
      }
      if (j == n - 1 - i) {
        cout << "NO SOLUTION";
        return 0;
      }
    }
  }
  cout << s;

  return 0;
}