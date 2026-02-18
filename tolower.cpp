class Solution {
public:
    string toLowerCase(string s) {
        string lower;
        for(char c:s){
            if(c-'A'>=0 && c-'A'<26){
                lower.push_back(c-'A'+'a');
            }
            else lower.push_back(c);
        }
        return lower;
    }
};