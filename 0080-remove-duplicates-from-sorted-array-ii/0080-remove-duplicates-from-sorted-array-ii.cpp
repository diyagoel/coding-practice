class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n<=2) return n;
        int k=2,i=2;
        while(i<n){
            if(nums[i]!=nums[k-2] && i==k){
                i++;k++;
            }
            else if(nums[i]!=nums[k-2] && i!=k){
                nums[k]=nums[i];
                k++;i++;
            }
            else if(nums[i]==nums[k-2])i++;
        }
        return k;
    }
};