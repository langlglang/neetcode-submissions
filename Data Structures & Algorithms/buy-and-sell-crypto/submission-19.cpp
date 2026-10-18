class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int difference = 0;
        int max = prices[prices.size()-1];
        for(int i = prices.size()-1; i>0; i--){
            if(prices[i]>=max){
                for(int j = 0; j<i; j++){
                    int diff = prices[i] - prices[j];
                    if(diff>difference){
                        difference = diff;
                    }
            
                }
                max = prices[i];
            }
        }
        return difference;
       
    }
};
