class Solution {
public:
    string reverseWords(string s) {
        string reversed;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '||i==s.size()-1){
                int j=i;
                if(s[j]==' ')j--;
                while(j>=0 && s[j]!=' '){
                    reversed.push_back(s[j]);
                    j--;
                }
                if(i<s.size()-1) reversed.push_back(' ');
            }
        }
        return reversed;
    }
};