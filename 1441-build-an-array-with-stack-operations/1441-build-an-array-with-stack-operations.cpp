class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int cnt=1;
        vector<string> ans;
        stack<int> st;
        for(int i=target.size()-1;i>=0;i--){
            st.push(target[i]);
        }
        while(cnt<=n){
            if(st.top()==cnt) {
                ans.push_back("Push");
                st.pop();
                cnt++;
            }
            else if(st.top()!=cnt){
                while(cnt!=st.top()){
                    ans.push_back("Push");
                    ans.push_back("Pop");
                    cnt++;
                }
            }
            if(st.empty()){
                break;
            }
        }
        return ans;
    }
};