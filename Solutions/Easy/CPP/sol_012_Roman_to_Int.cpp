#include <string>

class Solution {
public:
    int romanToInt(string s) 
    {
        int finalNumber = 0;
        int i = 0;

        while (i < s.size()) {
            int value = getValue(s[i]);
            int nextValue = (i + 1 < s.size()) ? getValue(s[i + 1]) : 0;

            if (value < nextValue) {
                finalNumber += (nextValue - value);
                i += 2; // Skip the next character
            } else {
                finalNumber += value;
                i++;
            }
        }

        return finalNumber;
    }

private:
    int getValue(char ch) {
        switch (ch) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
};