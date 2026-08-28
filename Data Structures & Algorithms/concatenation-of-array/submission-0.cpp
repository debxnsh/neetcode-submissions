class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>nums2 = nums;
        for (int x: nums){
            nums2.push_back(x);
        }
        return nums2;
    }
};