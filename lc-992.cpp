class Solution {
public:
    int atmost(vector<int>& nums, int k){
        int n=nums.size();
        int ans=0;
        map<int,int> freq;
        int count=0;
        int tail=0;
        int head=-1;
        while(tail<n){
            while(head+1<n&&(count<k||freq[nums[head+1]]>=1)){
                head++;
                freq[nums[head]]++;
                if(freq[nums[head]]==1) count++;
            }
            ans+=(head-tail+1);
            if(head<tail){
                tail++;
                head=tail-1;
            }
            else{
                if(freq[nums[tail]]==1) count--;
                freq[nums[tail]]--;
                tail++;
            }
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return (atmost(nums,k)-atmost(nums,k-1));
    }
};