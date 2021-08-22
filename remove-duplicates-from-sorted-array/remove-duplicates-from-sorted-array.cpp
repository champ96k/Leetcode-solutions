class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 1; 
        while(i < nums.size()){
            if(nums[i] == nums[i-1]){
                nums.erase(i+nums.begin());
            }else
                i++;
        }
      return nums.size();
   }
};