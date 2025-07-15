#include <string>
class Solution 
{
public:
    bool isPalindrome(int x) 
    {
        if(x < 0) { return false; }

        std::string s = std::to_string(x);
        int l = s.size();

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] != s[l - 1 - i])
            {
                return false;
            }
        }
        return true;
    }
};