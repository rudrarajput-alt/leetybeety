class Solution {
public:
    int mySqrt(int x) {
        vector <int> temp;
        if (x!=0){
    for (long long i = 1 ; i<=x ;++i){
    if (i*i>x){temp.push_back(i-1);break;}

    }}if (x==1) return 1;
    if (x==0) return 0;
    


   return temp.at(0); }
};