class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int p=0,m=1;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                arr[p]=nums[i];
                p=p+2;
            }
            else{
                arr[m]=nums[i];
                m=m+2;
            }
        }
    
        return arr;
    }
};
