class Solution {
public:
    bool isPalindrome(string s) {
        char start='\0', end='\0';
        int len = s.length();
        for (int i = 0, k = len - 1; i < k; i++, k--) {
            while (i < k && !isalnum((start = s[i]))) ++i;
            while (i < k && !isalnum((end = s[k]))) --k;
            if (i < k && tolower(s[i]) != tolower(s[k])) return false;
        }

        return true;
    }
};

