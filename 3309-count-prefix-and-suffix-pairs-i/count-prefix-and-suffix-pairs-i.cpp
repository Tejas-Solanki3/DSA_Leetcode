class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;

        for (int i = 0; i < words.size(); i++) {
            for (int j = i + 1; j < words.size(); j++) {
                string a = words[i];
                string b = words[j];

                if (b.size() >= a.size() &&
                    b.substr(0, a.size()) == a &&
                    b.substr(b.size() - a.size()) == a) {
                    count++;
                }
            }
        }

        return count;
    }
};