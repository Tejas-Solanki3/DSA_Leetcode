class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        int fnneg = nums.size();

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (nums[mid] >= 0) {
                fnneg = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        int neg = fnneg;

        l = 0;
        r = nums.size() - 1;
        int fpos = nums.size();

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (nums[mid] > 0) {
                fpos = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        int pos = nums.size() - fpos;

        return max(pos, neg);
    }
};