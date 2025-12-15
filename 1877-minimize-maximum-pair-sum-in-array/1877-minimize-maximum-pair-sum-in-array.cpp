class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        int msum=0;
        int csum=0;
        while(i<j){
            csum = nums[i]+nums[j];
            msum = max(csum,msum);
            i++;
            j--;
        }
        return msum;
    }
};