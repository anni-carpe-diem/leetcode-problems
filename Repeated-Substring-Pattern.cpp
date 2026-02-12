class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        for(int i=0;i<n/2;i++){
            if(n%(i+1)==0){
                string sub=s.substr(0,i+1);
                string temp=sub;
                int j=n/(i+1);
                while(j>1){
                    temp=temp+sub;
                    j--;
                }
                if(temp==s) return true;
            }
        }
        return false;
    }
};