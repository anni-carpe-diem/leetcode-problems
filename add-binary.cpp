class Solution {
public:
    string addBinary(string a, string b) {
        int carry=0;
        int n1=a.size()-1,n2=b.size()-1;
        string sum;
        while(n1>=0&&n2>=0){
            int temp=(a[n1]-'0')+(b[n2]-'0')+carry;
            if(temp==0){
                carry=0;
                sum.insert(0,"0");
            }
            else if(temp==1){
                carry=0;
                sum.insert(0,"1");
            }
            else if(temp==2){
                carry=1;
                sum.insert(0,"0");
            }
            else if(temp==3){
                carry=1;
                sum.insert(0,"1");
            }
            n1--;
            n2--;
        }
        if(n1>n2){
            while(n1<a.size()){
                int temp=(a[n1]-'0')+carry;
                if(temp==0){
                    carry=0;
                    sum.insert(0,"0");
                }
                else if(temp==1){
                    carry=0;
                    sum.insert(0,"1");
                }
                else if(temp==2){
                    carry=1;
                    sum.insert(0,"0");
                }
                else if(temp==3){
                    carry=1;
                    sum.insert(0,"1");
                }
                n1--;
            }
        }
        else if(n2>n1){
            while(n2<b.size()){
                int temp=(b[n2]-'0')+carry;
                if(temp==0){
                    carry=0;
                    sum.insert(0,"0");
                }
                else if(temp==1){
                    carry=0;
                    sum.insert(0,"1");
                }
                else if(temp==2){
                    carry=1;
                    sum.insert(0,"0");
                }
                else if(temp==3){
                    carry=1;
                    sum.insert(0,"1");
                }
                n2--;
            }
        }
        if(carry==1) sum.insert(0,"1");
        return sum;
    }
};