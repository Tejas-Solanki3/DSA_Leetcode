class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) {
            return 0;
        }

        std::vector<bool> isPrime(n, true);
        isPrime[0] = false;
        isPrime[1] = false;

        int counter = 0;

        for (int i = 2; i < n; ++i) {
            if (isPrime[i]) {
                ++counter;
                
                for (long long j = (long long)i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        return counter;
    }
};
