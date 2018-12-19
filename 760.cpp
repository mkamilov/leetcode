class Solution {
public:
    vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int>P(n);
        map<int, int> bmap;
        for (int i =0; i < n; ++i) {
            bmap[B[i]] = i;
        }
        for (int i = 0; i < n; ++i) {
            P[i] = bmap[A[i]];     
        } 
        return P;
    }
};
