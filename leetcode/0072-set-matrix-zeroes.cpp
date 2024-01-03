class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int, short>> zeros;
        for(int i = 0; i < matrix.size(); i++) {
            for(short j = 0; j < matrix[i].size(); j++) {
                if(matrix[i][j] == 0) {
                    zeros.push_back(make_pair(i, j));
                }
            }
        }

        for(pair<int, short> pos: zeros) {
            for(int i = 0; i < matrix.size(); i++) {
                matrix[i][pos.second] = 0;
            }
            for(short j = 0; j < matrix[pos.first].size(); j++) {
                matrix[pos.first][j] = 0;
            }
        }
        
    }
};
