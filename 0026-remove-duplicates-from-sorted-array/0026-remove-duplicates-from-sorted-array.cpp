class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for (int i = 1; i < nums.size(); ) {   // no ++i here anymore!
            if (nums.at(i-1) == nums.at(i)) {
                nums.erase(nums.begin() + i);   // erase CURRENT dupe, not i-1
            } else {
                ++i;   // only move forward when NO erase happened
            }
        }
        return nums.size();
    }
};