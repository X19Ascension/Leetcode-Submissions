#include <string>
using std::string;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        if(strs.empty()) { return ""; }


        string commonPrefix = strs[0];

        for(int i = 1; i < strs.size(); ++i)
        {
            const std::string& current = strs[i];
            int j = 0;

            while(j < commonPrefix.size() && j < current.size() && commonPrefix[j] == current[j])
            {
                ++j;
            }

            commonPrefix = commonPrefix.substr(0,j);

            if(commonPrefix.empty()) {return ""; }
        }



        return commonPrefix;
    }
};