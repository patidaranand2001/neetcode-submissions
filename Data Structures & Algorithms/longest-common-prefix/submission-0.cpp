class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        int min_len= INT_MAX;
        for (auto str: strs)
        {
            // min_len=min(min_len,str.length());/
            if (str.length()< min_len) min_len=str.length();

        }
        string ans="";
        for (int i=0;i<min_len;i++)
        {   char ch= strs[0][i];
           for (auto str:strs)
             if(str[i]!=ch) return ans;
            ans.push_back(ch);
        }
        return ans;
    }
};