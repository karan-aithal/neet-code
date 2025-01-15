#include <bits/stdc++.h>
#include <iostream>
#define fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define MOD 1000000007;
using namespace std;

int maxProfit(vector<int> &prices) {

  int i = 0;
  int j = 1;
  int maxProfit = 0;

  while (j < prices.size()) {

    if (prices[j] > prices[i]) {
      maxProfit =
          maxProfit > prices[j] - prices[i] ? maxProfit : prices[j] - prices[i];

    } else
      i = j;

    j++;
  }

  return maxProfit;
}

void solve() {

  int i, n, x;

  vector<int> prices;

  fo(i, 0, n) {

    cin >> x; // values
    prices.push_back(x);
  }

  int final = maxProfit(prices);
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




// Dynamic Programming



//  int maxProfit(vector<int>& prices) {
//         int maxP = 0;
//         int minBuy = prices[0];

//         for (int& sell : prices) {
//             maxP = max(maxP, sell - minBuy);
//             minBuy = min(minBuy, sell);
//         }
//         return maxP;
//     }