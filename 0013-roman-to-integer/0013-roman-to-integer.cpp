class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int total = 0;

        for (int i = 0; i < s.size(); ++i) {
            int value = roman[s[i]];
            int nextValue = (i + 1 < s.size()) ? roman[s[i + 1]] : 0;

            if (value < nextValue) {
                total -= value; // حالة زي IV أو IX
            } else {
                total += value;
            }
        }

        return total;
    }
};
