/*
 * Problem: Gray Code
 * URL: https://cses.fi/problemset/task/2205
 * Date: 2026-11-13
 * Time: 23:06:48
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
  for (int i = 0; i < n; i++) cout << "0";
  cout << "\n";
  for (int b = 1; b < (1 << n); b++) {
    cout << ((b >> (n - 1)) & 1);
    for (int d = n - 2; d >= 0; d--) {
      cout << (((b >> d) & 1) ^ ((b >> (d + 1)) & 1));
    }
    cout << "\n";
  }

  return 0;
}