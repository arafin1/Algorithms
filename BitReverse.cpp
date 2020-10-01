class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
       
        std::bitset<32> b(n);
        
        string s = b.to_string();
        std::reverse(s.begin(),s.end());
        
        std::bitset<32> b3(s); 
        uint32_t i = b3.to_ulong();
        return i;
    }
};