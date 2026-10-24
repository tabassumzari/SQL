class Solution {
public:
    string toLowerCase(string s) {
        for (char& ch : s) {
            if (ch >= 'A' && ch <= 'Z') {
                ch += 'a' - 'A';
            }
        }

        return s;
    }
};