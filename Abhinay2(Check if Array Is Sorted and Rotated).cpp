class Solution {
public:
    bool check(vector<int>& nums) {
        int intersect=0;
        for(int j=1;j<nums.size();j++){
            if(nums[j-1]>nums[j]){
                intersect++;
            }
        }
        if(nums[0]<nums[nums.size()-1]){
            intersect++;
        }
        if(intersect<=1){
            return true;
        }
        return false;
    }
};
