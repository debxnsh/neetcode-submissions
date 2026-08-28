class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int zero = 0;
        for (int x : nums) {
            if (x!=0){
            product = product * x;}
            else zero++;
        }
        vector<int>sol;

        if (zero == 1) {
            for (int x : nums){
                if (x!=0) sol.push_back(0);
                else sol.push_back(product);
            }
        } else if (zero > 1) {
            for (int x : nums){
                sol.push_back(0);
            }
        } else {
            for (int x : nums) {
            sol.push_back(product/x);
        }
        }
        
        return sol;
    }
};
