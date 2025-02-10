#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> mergeSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Your implementation here
        // #88
        
        
        int m = nums1.size();
        int n = nums2.size();
                int i = m-1;
        int j = n-1;
        int k = m+n-1;
        


        // nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
        //                  i                         j
        //          m+n-1
        //                    5 6

        // ALWAYS ITERATE FROM END !!       


        while (j >= 0) {  // while greater than 2nd array
            
            if (i >= 0 && nums1[i] > nums2[j]) { // while greater than 1st array
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }    

        return nums1;

    }
};






int main() {
    Solution solution;
    vector<int> nums1 = {1, 3, 5};
    vector<int> nums2 = {2, 4, 6};
    vector<int> result = solution.mergeSortedArrays(nums1, nums2);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}