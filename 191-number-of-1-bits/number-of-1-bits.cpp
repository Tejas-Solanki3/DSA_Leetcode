class Solution { 
public: 
    int hammingWeight(int n) { 
        int count = 0; 
        long div = 1; 
        
        for(int i = 0; i < 32; i++) { 
            int res = (n & div); 
            if (res == div) { 
                count++; 
            } 
            div = 2 * div; 
        } 
        
        return count; 
    } 
};
