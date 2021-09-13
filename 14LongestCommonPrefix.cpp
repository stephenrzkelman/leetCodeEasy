class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        for(int i = 1; i<strs.size(); i++)
        {
            int length = min(prefix.size(), strs[i].size());
            string common = "";
            for(int j = 0; j<strs[i].size(); j++)
            {
                if(prefix[j] == strs[i][j])
                {
                    common += strs[i][j];
                }
                else
                {
                    break;
                }
            }
            prefix = common;
        }
        return prefix;
    }
};
