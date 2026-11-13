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

vector<string> create(int n) {
  if (n == 1) {
    return {"0", "1"};
  }
  vector<string> code;
  auto prev = create(n - 1);
  for (auto s : prev) {
    code.push_back("0" + s);
  }
  reverse(prev.begin(), prev.end());
  for (auto s : prev) {
    code.push_back("1" + s);
  }
  return code;
}

int main() {
  int n;
  cin >> n;
  auto code = create(n);
  for (auto s : code) {
    cout << s << "\n";
  }

  return 0;
}