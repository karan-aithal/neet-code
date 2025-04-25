#include <bits/stdc++.h>
#define fo(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define MOD 1000000007;

using namespace std;

int totalFruit(vector<int>& fruits) {
        
    unordered_map <int,int> umap;
    int n = fruits.size();
    int l = 0 , r = 0;
    int maxLen = 0;

    // 1. keep moving right pointer and increment map to store freq of each fruit in umap
    //         umap[fruits[r]]++;
    //         r++;
    // 2. If umap has more than 2 fruits we have to shrink the window and remove elements from the umap
    // until we have only 2 fruits types
    //         umap[fruits[l]]--;
    //         l++;
    // 3. store max window size 

    while (r<n)
    {
        // Add element into map from r point 
        umap[fruits[r]]++;

        // 1 . if not possible to have more than 2 fruits
        if(umap.size() > 2){ 
            
            // if(umap.size() >2) // Optimal solution
        
            while (umap.size() > 2) // while umap has more than 2 fruits remove them using l-pointer
            {
                umap[fruits[l]]--;

                if(umap[fruits[l]] == 0)
                    umap.erase(fruits[l]);
                    
                l++;
            }
        }

        // 2. when possible having less than 2 fruits store max window size and increment to fit more
        else if(umap.size() <=2)       {
            maxLen = max(maxLen,r-l+1); // max window size
            r++;
        }
        
    }
    return maxLen;
}

// I/P FOR VECTOR ARRAY STRING AND FUNCTION CALL
void solve()
{
    int x, k, n;
    cin >> n; // number of elements
    vector<int> fruits;

    fo(i, 0, n)
    {
        cin >> x; // values
        fruits.push_back(x);
    }


    // Function call
    cout << totalFruit(fruits);
}

// NO OF TEST CASES -- I/P
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