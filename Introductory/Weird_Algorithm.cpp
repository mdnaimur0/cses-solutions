/*
 * Problem: Weird Algorithm
 * URL: https://cses.fi/problemset/task/1068/
 * Date: 2026-08-12
 * Time: 22:07:06
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n;
  cin >> n;

  while (n != 1) {
    cout << n << " ";
    if (n % 2 == 0)
      n /= 2;
    else
      n = 3 * n + 1;
  }
  cout << 1;

  return 0;
}