class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> s;
        int l = 0;
        for (int r = 0; r<nums.size(); r++){
            if (s.count(nums[r])){
                return true;
            }

            s.insert(nums[r]);

            if (r-l>=k){
                s.erase(nums[l]);
                l++;
            }
        }

        return false;
    }
};