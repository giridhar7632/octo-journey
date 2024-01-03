class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<short> sec;
        if(bank.size() < 2)
            return 0;

        for (string row : bank) {
            size_t idx = row.find('1');
            if (idx == string::npos) {
                continue;
            }

            short cnt = 0;
            for (char c: row) {
                if (c == '1') {
                    cnt++;
                }
            }
            sec.push_back(cnt);
        }

        int total = 0;
        if(sec.size() > 0) {
            for (size_t i = 0; i < sec.size() - 1; i++) {
                cout << "inside" << endl;
                total += sec[i] * sec[i + 1];
            }
        }

        return total;
    }
};
