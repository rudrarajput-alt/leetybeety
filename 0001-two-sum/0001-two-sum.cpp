class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arr ;
        for (int i = 0 ; i <nums.size();++i){
          for (int j = 0 ; j <i;++j){
            if ((nums.at(i)+ nums.at(j) ) == target  and arr.size()==0){ 
            arr.push_back(i);
            arr.push_back(j);break;}


          }
    }
 return arr;   }
};