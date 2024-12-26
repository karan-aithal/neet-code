#include <bits/stdc++.h>
#define fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define MOD 1000000007;
using namespace std;

void solve() {

  int i, n;
  vector<int> data; // Vector to store input data

  // Read the number of elements
  cin >> n;

  fo(i, 0, n) {
    int x;
    cin >> x;
    data.push_back(x);
  }

  // Print the vector to verify the input (optional) 
  for (int val : data) { cout << val << " "; } cout << endl;
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



// -----------------  input.txt file---------------------------

// 2              // no of testcases
// 5              // 5 is the number of elements
// 1 2 3 4 5      // value of 5 elements     
// 4               // test case no.2
// 6 7 8 9         // value of 4 elements

// ------------------------------------------------------------