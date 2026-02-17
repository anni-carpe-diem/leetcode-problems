class Solution {
public:
    bool detectCapitalUse(string word) {
        int count=0;
        for(char letter:word){
            if(isupper(letter)) count++;
        }
        if(count==word.size()||count ==0) return true;
        if(count==1&& isupper(word[0])) return true;
        else return false;
    }
};