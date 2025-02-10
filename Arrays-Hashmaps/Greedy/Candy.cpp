#include <iostream>
#include <vector>

using namespace std;


//         This problem is actually quite easy once you figure out the algorithm:
// Traverse the children from left to right. Any child that has a higher rating than their LH neighbour gets 1 more candy than their LH neighbour. Otherwise they get 1 candy.
// Next, traverse the children from right to left. Any child that has a higher rating than their RH neighbour gets 1 more candy than their RH neighbour - unless they already have more candies than their RH neighbour in which case the number of candies is unchanged.
// Finally, add up all the candies and return the total to the caller.


class Solution {
public:
    int candy(vector<int>& ratings) {
        // Your implementation here
        return 0;
    }
};

int main() {
    Solution solution;
    vector<int> ratings = {1, 0, 2}; // Example input
    cout << "Minimum candies required: " << solution.candy(ratings) << endl;
    return 0;
}