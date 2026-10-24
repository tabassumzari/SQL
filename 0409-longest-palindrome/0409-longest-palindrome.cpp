class Solution {
public:
    int longestPalindrome(string s) {
        int freq[128] = {};
        int length = 0;

        for (char ch : s) {
            freq[ch]++;
            if (freq[ch] % 2 == 0) {
                length += 2;
            }
        }

        return length < s.size() ? length + 1 : length;
    }
};