#include <bits/stdc++.h>
#define fo(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define MOD 1000000007;

using namespace std;

//  lengthOfLongestSubstring w/o repeating characters
// HASHING  -- number hashing using array
// TWO- POINTERS
// W/O repeating characters

// Input: s = "abcabcbb"
// s[r] → s[3] = 'a'
// hash['a'] = 0;   -//-  hash = { 'a': 0 }

// hash[s[r]] → hash['a'] = 0
// hash[s[l]] → hash['b'] = 1

// Original Array:  ['a', 'b', 'c', 'a', 'b', 'c', 'b', 'b']
//                 ^  ^  ^  ^  ^  ^  ^  ^     <- Track last seen index of each character

// Step 2:    ['a', 'b', 'c'] -> Add 'c'
// Hash:      ['a' → 0, 'b' → 1, 'c' → 2, ...]
// Max Length: 3

// Step 6:    ['b', 'c']     -> Shift left pointer due to 'b'
// Hash:      ['a' → 3, 'b' → 6, 'c' → 5, ...]
// Max Length: 3

// Step 7:    ['b']         -> Shift left pointer due to 'b'
// Hash:      ['a' → 3, 'b' → 7, 'c' → 5, ...]
// Max Length: 3




int lengthOfLongestSubstring(string s)
{
    int r = 0;
    int l = 0;
    int n = s.size();
    int maxLen = 0;

    int hash[256] = {-1}; // only 1st elementn is -1
    //              OR
    for (int i = 0; i < 256; ++i)
        hash[i] = -1; // sets all elements of array hash to -1;


    while (r < n)
    {
        // 256 ASCII CHARACTERS
        // number hashing using array
        // else use unordered_map from STL

        if (hash[s[r]] != -1)
        {
            if (hash[s[r]] >= l)
            {
                l = hash[s[r]] + 1; // increment left pointer to current index + 1 to shrink the window
                 // shrink to avoid repeating character
            }

            int len = r - l + 1;
            maxLen = max(maxLen, len);

            hash[s[r]] = r; // update hash-tables to new r-index
            r++;            // increment right pointer
        }
    }
    return maxLen;
}


//
//
//
// I/P FOR VECTOR ARRAY STRING AND FUNCTION CALL
//
//
void solve()
{
    string s;

    cin >> s;

    // Function call
    cout << lengthOfLongestSubstring(s);
}

//
//
//
// NO OF TEST CASES -- I/P
//
//
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif

    int tt;
    cin >> tt;

    while (tt--)
    {
        solve();
    }
}