class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long pro = 1;
        int cnt0 = 0;
        for(auto num : nums){
            if(num != 0) pro *= num;
            else cnt0++;
        }

        vector<int> ans;
        for(auto num : nums){
            if(num == 0){
                if(cnt0 == 1) ans.push_back(pro);
                else ans.push_back(0);
            }else{
                if(cnt0 == 0) ans.push_back(pro / num);
                else ans.push_back(0);
            }
        }

        return ans;
    }
};
