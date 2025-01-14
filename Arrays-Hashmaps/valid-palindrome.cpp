#include <bits/stdc++.h>
#define fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define MOD 1000000007;
using namespace std;

// Two POinter approach Optimal
bool isPalindrome(string &s) {

  int j = s.length() - 1;
  bool x = true;

  for (int i = 0; i <= s.length() - 1; i++) {

    if (s[i] == s[j])
      j--;

    else {
      x = false;
      break;
    }

    if (j < i) {
      break;
    }
  }

  return x;
}

void solve() {

  string s, t;
  cin >> s;

  string final = isPalindrome(s) ? "true" : "false";

  cout << final << endl;
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