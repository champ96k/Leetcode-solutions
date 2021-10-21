class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxSum = INT_MIN, currentSum = 0;;
        for(int i=0;i<nums.size();i++) {
            currentSum = currentSum + nums[i];  
            if(maxSum<currentSum) {
                maxSum = currentSum;
            } if(currentSum<0) {
                currentSum = 0;
            }
        }
        
        return maxSum;
    }
};