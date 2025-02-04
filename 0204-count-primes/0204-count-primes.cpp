class Solution {
public:
    void build_seive(vector<bool> &primes, int n) {
        primes[0] = primes[1] = false;
        
        for(int i = 2; i * i < n; i++) {
            if(primes[i]) {
                for(int j = i * i; j < n; j+=i) {
                    primes[j] = false;
                }
            }
        }
    }
    int countPrimes(int n) {
        if(n < 2) return 0;
        int cnt = 0;
        vector<bool>primes(n, true);
        build_seive(primes, n);
        for(int i = 2; i < n; i++) {
            if (primes[i]) cnt++;
        }
        return cnt;
    }
};