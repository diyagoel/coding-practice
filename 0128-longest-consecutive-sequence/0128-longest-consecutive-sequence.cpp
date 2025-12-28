class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int num:nums) mp[num]++;
        int ans=0;
        for(auto it:mp){
            int num=it.first;
            if(mp.find(num-1)==mp.end()){
                int curlen=1;
                while(mp.find(num+curlen)!=mp.end()){
                    curlen++;
                }
                ans=max(ans,curlen);
            }
        }
            return ans;
    }
};