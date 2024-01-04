class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int i : nums) {
            mp[i]++;
        }

        int cnt = 0;
        for (auto it : mp) {
            int n = it.second;
            if(n == 1) return -1;
            cnt += n/3;
            if(n % 3) cnt++;
        }

        return cnt;
    }
};
