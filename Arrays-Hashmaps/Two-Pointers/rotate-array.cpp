#include <iostream>
#include <vector>

using namespace std;


// #189 - MED

// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
// Two Pointer
// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]

class Solution {
public:


// 
// ITERATE FROM LAST
// USE Rotate by 1 x k times
//    OR
// REVERSE 3 times by splitting array based on k indices

    void rotateByOne(vector<int>& nums)
    {
        int n = nums.size(); // size of array
        int temp = nums[n-1]; // last element

        //swap from last element element with its previous element to rotate
        // 12345 4
        // 12344 3     temp = 5
        // 12334 2 
        // 12234 1 
        // 11234 0

        for (int i = n-1 ; i > 0; i--) {

            nums[i] = nums[i-1]; // store previous to last and --
        }

        nums[0] = temp;
    }


    void rotateArray(vector<int>& nums, int k) {

        for(int i=0; i<k; i++) rotateByOne(nums);

    
    }

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotateArray(nums, k);

    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
};
