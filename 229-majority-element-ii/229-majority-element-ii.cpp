class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int size = nums.size();
        int cnt1 = 0, cnt2=0;
        int can1 = INT_MIN, can2 = INT_MIN;
        for(int i=0;i<size;i++){
            if(nums[i]==can1){
                cnt1+=1;
            }
            else if(nums[i]==can2){
                cnt2+=1;
            }
            else if(cnt1==0){
                can1 = nums[i];
                cnt1=1;
            }
            else if(cnt2==0){
                can2 = nums[i];
                cnt2=1;
            }
            else{
                cnt1-=1;
                cnt2-=1;
            }
        }
        // cout<<can1<<" "<<cnt1<<" "<<can2<<" "<<cnt2;
        cnt1 = 0,cnt2=0;
        for(int i=0;i<size;i++){
            if(can1==nums[i]) cnt1+=1;
            else if(can2==nums[i]) cnt2+=1;
        }
        vector<int> res;
        if(cnt1>(size/3)) res.push_back(can1);
        if(cnt2>(size/3)) res.push_back(can2);
        return res;
    }
};