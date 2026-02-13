class Solution {
public:
    int countSegments(string s) {
        int i=0;
        int n=s.size()-1;
        while(i<=n&&s[i]==' ') i++;
        while(i<=n&&s[n]==' ') n--;
        if(i>n) return 0;
        int segments=1;
        while(i<=n){
            if(s[i]==' '){
                segments++;
                i++;
                while(i<=n&&s[i]==' ') i++;
            }
            else i++;
        }
        return segments;
    }
};