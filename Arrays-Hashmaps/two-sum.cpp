#include<bits/stdc++.h>
#include <unordered_map>
#define fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define MOD 1000000007 ;
using namespace std;


// Hash Map (Two Pass)
vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> umap;  // val -> index

// Pass 1 
        for (int i =0; i<nums.size(); i++) {
        
            umap[nums[i]] = i; // store key->value  , nums[i] --> i(index)
        }

// Pass 2
        for (int i = 0 ;i< nums.size(); i++ ) {
            // i + j = target
            // target - i = j(diff)
            // umap.count(diff) - checks if j is present n umapS 
        
        int diff = target - nums[i];

                if(umap.count(diff) && umap[diff] !=i) 
                // check if umap has the diff-number and if diff-number's index(j) != i
                {
                    return  { i , umap[diff]}; // return vector array of i & j indexes 
                }

        }
        return {};
        
    }




void solve(){
  
int i , n ;
int x, target;

    vector<int> nums;

fo(i, 0, n) {
   
    cin >> x; // values 
    nums.push_back(x);
  }


  cin >> target;

  twoSum(nums, target);

}


int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE 
freopen("input.txt", "r", stdin);
#endif 

int tt ;

cin>>tt ;

while(tt--){

   solve() ;

}

}