class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int i : nums) {
            mp[i] += 1;
        }

        int minWays = 0;
        for (const auto& it : mp) {
            int n = it.second;
            if (n < 2) {
                return -1;
            }

            int cond = n % 3;
            if (cond == 0) {
                minWays += n / 3;
                continue;
            } else if (cond == 1) {
                int threes = n / 3;
                n -= (threes * 3);

                if (n % 2 != 0) {
                    threes--;
                    n += 3;
                }

                int twos = n / 2;

                minWays += threes + twos;
                continue;
            }

            else if (cond == 2) {
                minWays += (n / 3) + 1;               
                continue;
            } else {
                return -1;
            }
        }

        return minWays;
    }
};
