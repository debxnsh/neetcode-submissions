class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int maxprice = 0;
        for (int r = 1; r<prices.size(); r++) {
            if (prices[l]>=prices[r]){
                l = r;
            }

            maxprice = max(maxprice, prices[r]-prices[l]);


        }

        return maxprice;
    }
};
