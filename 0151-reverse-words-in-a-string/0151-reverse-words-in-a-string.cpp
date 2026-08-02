class Solution {
public:
    string reverseWords(string s) {
        int count = 0;
       vector <string>  temp;
        vector <string> t;
        string word;
        stringstream ss(s);
        while (ss>>word){
            t.push_back(word);
        }
        word = "";
        for (int i = 0 ;i<t.size()/2;++i){
        temp.push_back(t.at(i));
        t.at(i)= t.at(t.size()-1-i);
        t.at(t.size()-1-i)=temp.at(i);
        }
for (int i = 0 ;i<t.size();++i){
word += t.at(i);
if (i!=t.size()-1) word+= " ";

}


   return word; }
};