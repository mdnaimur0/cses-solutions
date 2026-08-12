/*
 * Problem: Permutations
 * URL: https://cses.fi/problemset/task/1070
 * Date: 2026-08-13
 * Time: 01:08:08
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
  if (n == 1) {
    cout << "1\n";
    return 0;
  }
  if (n == 2 || n == 3) {
    cout << "NO SOLUTION\n";
    return 0;
  }
  for (int i = n / 2; i >= 1; i--) {
    cout << i << " " << i + n / 2 << " ";
  }
  if (n % 2 == 1)
    cout << n << " ";
  cout << "\n";

  return 0;
}