class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
sort(strs.begin(),strs.end());
string ans;
string first = strs.at(0),last = strs.at(strs.size()-1);
for (int i=0;i<min(first.size(),last.size());++i){
    if (first.at(i)!=last.at(i))return ans;
 ans = ans+first.at(i);}





 return ans;   }};