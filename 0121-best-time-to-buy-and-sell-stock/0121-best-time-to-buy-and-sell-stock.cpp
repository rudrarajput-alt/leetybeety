class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int maxp=0  ;
      int minp = prices.at(0);

       
            if (is_sorted(prices.begin(),prices.end(),greater<int>()))return 0;
      
for (int i = 0 ;i <prices.size();++i){
 minp = min(minp,prices.at(i));
maxp = max (maxp,prices.at(i)- minp);


}











   return maxp; }
};