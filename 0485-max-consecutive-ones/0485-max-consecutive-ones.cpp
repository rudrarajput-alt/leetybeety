class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int temp {0},temp2{0};
        for ( int i = 0 ; i <nums.size();++i) {
            if (nums.at(i)!= 0) {++temp;
            if (temp2 <=temp){
             temp2 = temp;}}
            else temp = 0;
        }
    return temp2;}
};