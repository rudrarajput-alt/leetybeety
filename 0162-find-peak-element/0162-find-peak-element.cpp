class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int temp = nums.size();
        if (temp<=2){
                if(temp==1)return 0;
                else if(temp==2 and nums.at(0)>nums.at(1))return 0;
                else return 1;}
               
            
        for(int i = 1;i<temp-1;++i){if(temp>2){
            
            if(nums.at(i-1)<nums.at(i) and nums.at(i+1)<nums.at(i))return i;}
           
        }
        
   
                    int temp1 = nums.at(temp-1);
                    sort(nums.begin(),nums.end());
                    if (nums.at(temp-1)==temp1)return temp-1;
               return 0;   }
};