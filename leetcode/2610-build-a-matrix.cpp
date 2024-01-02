class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        // unordered_map<int, int> mp;
        // for(int i: nums) {
        //     mp[i] += 1;
        // }
        vector<int> fq(nums.size() + 1);
        vector<vector<int>> matrix;
        for(int i: nums) {
            if(fq[i] >= matrix.size()) {
                matrix.push_back({});
            }

            matrix[fq[i]].push_back(i);
            fq[i]++;
        }

        return matrix;
    }
};
