class Solution {
public:
    bool isAnagram(string s, string t) {
        vector <int> temp;
        vector <int> temp1;
        for (int i : s){
            temp.push_back(i);}
            for (int i :t){
                temp1.push_back (i);
            }
    sort(temp.begin(),temp.end());
     sort(temp1.begin(),temp1.end());
     if (temp==temp1){ return true;


     }
        else {return false;}
    }
};