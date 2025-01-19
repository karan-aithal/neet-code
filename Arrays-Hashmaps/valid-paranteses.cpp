#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#define fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define MOD 1000000007;
using namespace std;

bool isValid(string s) {


// use hash map 
// and stack !!
  bool isValid = false;

  int j = s.size() - 1;
  for (int i = 0; i < s.size(); i++) {
    if (j < i)
      break;

    if ((int)s[i] == (int)s[j] - 1)
      j--;
    else if ((int)s[i] == (int)s[j] - 2)
      j--;

    else
      return false;

    isValid = true;
  }
  return isValid;
}

void solve() {

  int i, n;

  string s;

  cin >> s;

  bool ans = isValid(s);

  cout << ans << endl;
}

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
#endif

  int tt;

  cin >> tt;

  while (tt--) {

    solve();
  }
}