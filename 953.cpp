class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        vector<int> pos(26,0);
        for (int i =0; i < order.size(); ++i) {
            pos[order[i]-'a'] = i;
        }
        for (int i = 0; i < words.size(); ++i) {
            for (int j = i+1; j< words.size(); ++j) {
                int k = 0;
                for (k; k < words[i].size() && k < words[j].size(); ++k) {
                    if (pos[words[i][k]-'a'] < pos[words[j][k]-'a']) {
                        break;
                    } else if (pos[words[i][k]-'a'] > pos[words[j][k]-'a']) {
                        return false;
                    }
                }
                if (k == words[j].size() && words[i].size() > words[j].size()) {
                    return false;
                }
            }
        }
        return true;
    }
};
