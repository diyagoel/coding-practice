class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;
        for(int i=0;i<tokens.size();i++){
            int res;
            if(tokens[i] =="+" || tokens[i] =="-" || tokens[i] =="/" || tokens[i] =="*"){
                int x = stoi(st.top());
                st.pop();
                int y = stoi(st.top());
                st.pop();
                if(tokens[i]=="+") res=x+y;
                if(tokens[i]=="-") res=y-x;
                if(tokens[i]=="*") res=x*y;
                if(tokens[i]=="/") res=y/x;
                st.push(to_string(res));
            }
            else{
                st.push(tokens[i]);
            }
            
        }
        return stoi(st.top());
    }
};