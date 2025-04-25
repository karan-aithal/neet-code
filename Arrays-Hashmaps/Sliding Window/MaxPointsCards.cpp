#include <bits/stdc++.h>
#define fo(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)

using namespace std;

// k = 3
// Original Array:      [1, 2, 3, 4, 5, 6, 1]
//                                ^  ^  ^     <- Take last 3 cards

// Step 0:             [1, 2, 3]                   -> front only
// Step 1:             [1, 2]         [1]          -> 2 front + 1 back
// Step 2:             [1]         [6, 1]          -> 1 front + 2 back
// Step 3:                        [5, 6, 1]        -> back only



int maxScore(vector<int> &cardPoints, int k)
{

    int lsum = 0 , rsum = 0, maxSum = 0;

    for (int i = 0; i <= k - 1; i++)
        lsum = lsum + cardPoints[i]; // first k elements as constant window

    maxSum = lsum; // current 1st window

    int rindex = cardPoints.size() - 1; // Store as right element index

    // // LOGIC only for k cards taken from beginning or the end of the row.
    // // NOT entire array

    for (int i = k - 1; i >= 0; i--)
    { // rotate the window from leaft -->right
        lsum = lsum - cardPoints[i];
        rsum = rsum + cardPoints[rindex];
        rindex--;
        maxSum = max(maxSum, lsum + rsum); // compare with current window sum and lsum+rsum
    }
    
    return maxSum;
}

void solve()
{

    int x, k, n;
    cin >> n; // number of elements
    vector<int> cardPoints;

    fo(i, 0, n)
    {

        cin >> x; // values
        cardPoints.push_back(x);
    }

    cin >> k;

   cout << maxScore(cardPoints, k);
}

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