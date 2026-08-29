class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int temp{};
       
       for(int i = 0;i<digits.size();++i){if(digits.at(i)==9)++temp;}
       if (temp==digits.size()){
        for(int i = 0;i<digits.size();++i)digits.at(i)=0;
        digits.insert(digits.begin(),1);
        return digits;
       }
 if(digits.at(digits.size()-1)==9){
       for(int i = 0;i<digits.size();++i){
        int idx = (int)digits.size()-i-2;
        if(digits.at(digits.size()-i-1)==9){
            digits.at(digits.size()-i-1)=0;
        if(digits.at(idx)==8){digits.at(idx)=9;break;}
          if(idx>=0){
            if(digits.at(idx)!=9) {++ digits.at(idx);break;}}else break;
            if(i==digits.size()-2)break;
        }
       }}else++digits.at(digits.size()-1);
       return digits;
}};