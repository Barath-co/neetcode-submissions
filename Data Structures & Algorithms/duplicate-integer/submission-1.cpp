class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       unordered_map<int,int>result;
       for(int i=0;i<nums.size();i++){
        if(result.find(nums[i])!=result.end()){
            return true;
        }
        result[nums[i]]++;
       }
       return false;
    }
};