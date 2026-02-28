class Solution {
public:
    string reverseStr(string s, int k) {
        int i=0;
        int n=s.size();
        for (int i = 0; i < n; i += 2 * k) {
            // Reverse first k characters in this block
            reverse(s.begin() + i, s.begin() + min(i + k, n));
        }
        return s;
    }
};