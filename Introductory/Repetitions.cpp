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

  int a[4] = {0}, result = 0;
  for (char ch : s) {
    if (ch == 'A') {
      a[0]++;
      a[1] = a[2] = a[3] = 0;
    } else if (ch == 'C') {
      a[1]++;
      a[0] = a[2] = a[3] = 0;
    } else if (ch == 'G') {
      a[2]++;
      a[1] = a[0] = a[3] = 0;
    } else {
      a[3]++;
      a[1] = a[0] = a[2] = 0;
    }
    result = max({result, a[0], a[1], a[2], a[3]});
  }
  cout << result;

  return 0;
}