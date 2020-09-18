class Solution {
public:
    vector<int> countBits(int num) {
        vector<int>counts;
        for(int i = 0;i<=num;i++){
            string s=  bitset<sizeof(s)>(i).to_string();
            bitset<sizeof(s)> foo ((s));
            counts.push_back(foo.count());
        }
    return counts;
    }
};