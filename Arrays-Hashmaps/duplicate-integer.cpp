#include <bits/stdc++.h>
#define fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define MOD 1000000007;
using namespace std;


bool hasDuplicate(vector<int>& nums) {

    unordered_set<int> uset;        // Create an unordered_set

    //unordered_map<string, int> umap;        // Create an unordered_map

    for (int i : nums) {
        if(uset.count(i))
            return true; 
        //.count() -- checks if a key exists in an unordered set/map 
        // 1 if an element with a value equivalent to k is found, or zero otherwise.    
        uset.insert(i);
    }

    return false;   

}

// input.txt
// 1
// 5
// 1 2 3 3 5




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
  for (int val : data) {
    cout << val << " ";
  }
  cout << endl;
  string final = hasDuplicate(data) ? "true" : "false";
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