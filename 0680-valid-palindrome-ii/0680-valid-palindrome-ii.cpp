class Solution {
public:
    bool checkPalindrome(int l,int r,string s){
        while(l<r){
            if(s[l]!=s[r])return false;
            l++;
            r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0;
        int j =s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return (checkPalindrome(i+1,j,s) || checkPalindrome(i,j-1,s)); 
            }
            i++;j--;
        }
        return true;
    }
};