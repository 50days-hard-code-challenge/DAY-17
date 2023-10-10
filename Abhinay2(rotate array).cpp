class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        /*while(k>0){
            int temp=nums.size()-1;
            for(int j=nums.size()-1;j>=1;j--){
               nums[j]=nums[j-1];
            }
            nums[0]=temp;
            k--;
        }*/
        vector<int>v(nums.size());
        for(int i=0;i<nums.size();i++){
            v[(i+k)%nums.size()]=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=v[i];
        }
        v.erase(v.begin(),v.end());
    }
};
