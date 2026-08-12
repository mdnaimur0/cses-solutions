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

  ll n;
  cin >> n;

  if (n == 1)
    cout << 1;
  else if (n < 4)
    cout << "NO SOLUTION";
  else {
    vector<ll> even, odd;
    for (int i = 1; i <= n; i++) {
      if (i % 2 == 0)
        even.push_back(i);
      else
        odd.push_back(i);
    }
    for (int i = 0; i < even.size(); i++)
      cout << even[i] << " ";

    for (int i = 0; i < odd.size(); i++)
      cout << odd[i] << " ";
  }

  return 0;
}