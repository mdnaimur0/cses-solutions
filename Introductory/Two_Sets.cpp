/*
 * Problem: Two Sets
 * URL: https://cses.fi/problemset/task/1092
 * Date: 2026-08-13
 * Time: 14:21:38
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  ll n;
  cin >> n;
  ll sum = n * (n + 1) / 2;
  if (sum % 2) {
    cout << "NO";
    return;
  }
  sum /= 2;
  vector<ll> v1, v2;
  ll curr = 0;
  ll temp = n;
  while (temp > 0) {
    if (curr + temp <= sum && !(v1.size() == 0 && curr + temp == sum)) {
      curr += temp;
      v1.push_back(temp);
    } else
      v2.push_back(temp);
    temp--;
  }
  if (v1.size() == 0 || v2.size() == 0 || curr != sum) {
    cout << "NO";
    return;
  }
  cout << "YES" << endl;
  cout << v1.size() << endl;
  for (ll a : v1)
    cout << a << " ";

  cout << endl << v2.size() << endl;
  for (ll a : v2)
    cout << a << " ";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}