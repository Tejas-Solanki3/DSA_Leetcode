class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;

        for (int r = 1; r <= numRows; r++) {
            vector<int> row;

            int val = 1;

            for (int c = 1; c <= r; c++) {
                row.push_back(val);

                val = val * (r - c);
                val = val / c;
            }

            result.push_back(row);
        }

        return result;
    }
};