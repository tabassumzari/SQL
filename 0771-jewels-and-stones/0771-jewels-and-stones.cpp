class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        bool isJewel[128] = {};
        int count = 0;

        for (char ch : jewels) {
            isJewel[ch] = true;
        }

        for (char ch : stones) {
            if (isJewel[ch]) {
                count++;
            }
        }

        return count;
    }
};