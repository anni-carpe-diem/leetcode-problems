class Solution {
  public:
    int countAtMostK(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        int tail=0;
        int head=-1;
        map<int,int> freq; 
        int count=0;
        int ans=0;
        while(tail<n){
            while(head+1<n&&(count<k||freq[arr[head+1]]>=1 )){
                head++;
                freq[arr[head]]++;
                if(freq[arr[head]]==1) count++;
            }
            ans+=(head-tail+1);
            if(head<tail){
                tail++;
                head=tail-1;
            }
            else{
                if(freq[arr[tail]]==1) count--;
                freq[arr[tail]]--;
                tail++;
            }
        }
        return ans;
    }
};