class Solution {
public:
    int findMin(vector<int>& nums) {
        int ptr1 = 0, ptr2 = nums.size()-1;
        int minAns = nums[ptr1];
        for(;ptr1<=ptr2;ptr1++,ptr2--){
            int t = min(nums[ptr1],nums[ptr2]);
            minAns = min(minAns,t);
        }
        //cout << minAns << endl;
        return minAns;
    }
};
