#include <bits/stdc++.h>
#include <unordered_map>
#define fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define MOD 1000000007;
using namespace std;

// We can just consider maintaining the frequency of each character.
// We can do this by having two separate hash tables for the two strings.
// Then, we can check whether the frequency of each character in string s is
// equal to that in string t and vice versa.
bool isAnagram(string s, string t) {


if(s.length()!= t.length())
{
   return false;
}

unordered_map<char, int> countS;
unordered_map<char, int> countT;


for (int i = 0; i < s.length(); i++)
{
   countS[s[i]]++;  // increment each char count in hashmap
   countT[t[i]]++;     
}

return countS == countT;

}


// 1
// racecar
// carrace

void solve() {

  int i, n;
  string s, t;
   cin >> s;
   cin >> t;
   string final = isAnagram(s,t) ? "true" : "false";
   
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