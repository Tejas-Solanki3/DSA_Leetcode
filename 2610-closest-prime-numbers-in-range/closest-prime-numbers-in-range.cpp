class Solution {
public:
    vector<int> closestPrimes(int left, int right) {

        vector<bool> isPrime(right + 1, true);

        isPrime[0] = false;
        isPrime[1] = false;

        for (int i = 2; i * i <= right; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= right; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        int prev = -1;
        int minDiff = INT_MAX;

        vector<int> ans = {-1, -1};

        for (int i = left; i <= right; i++) {

            if (isPrime[i]) {

                if (prev != -1) {

                    int diff = i - prev;

                    if (diff < minDiff) {
                        minDiff = diff;
                        ans = {prev, i};
                    }

                    if (minDiff == 1 || minDiff == 2) {
                        return ans;
                    }
                }

                prev = i;
            }
        }

        return ans;
    }
};