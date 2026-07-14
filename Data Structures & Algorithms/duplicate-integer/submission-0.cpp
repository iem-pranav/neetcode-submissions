class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> freq;
        for(auto num : nums) freq[num]++;

        bool hasDup = false;
        for(auto x : freq){
            if(x.second > 1){
                hasDup = true;
                break;
            }
        }

        return hasDup;
    }
};