class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n,0);
        int i=0,j=n-1;
        
        for(int k=0;k<2*n;k++){
            if(k%2==0) {
                ans[k]=nums[i];
                i++;
            }
            else{
                ans[k]=nums[(i+n-1)];
                j++;
            } 
        }
        return ans;
    }
};