class Solution {
public:
    int findMin(vector<int>& nums) {
        int left=0, right = nums.size()-1 , mid=0;
        //rotate都是把最大的往前 找尋 nums[i] < nums[i+1]的分割點
        
        if(nums.size()==1)
            return nums[0];
        
        if(nums[right]>nums[0])
            return nums[0];
        
        //binary search 
        while(left<=right){ // 345612
            
            mid = left+ (right-left)/2; //找mid的位置
            if(nums[mid] > nums[mid+1]) // 分割點
                return nums[mid+1];
            
            if(nums[mid-1] > nums[mid]) // 4 3
                return nums[mid];
            
            if(nums[mid] > nums[0])
                left = mid+1;
            else{
                right = mid-1;
            }
        }
        
        return -1;
    }
};
        /*
        int ptr1 = 0, ptr2 = nums.size()-1;
        int minAns = nums[ptr1];
        for(;ptr1<=ptr2;ptr1++,ptr2--){
            int t = min(nums[ptr1],nums[ptr2]);
            minAns = min(minAns,t);
        }
        //cout << minAns << endl;
        return minAns;
        */
    
