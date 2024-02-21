import java.util.*; 

class Solution {
    public int msb(int a ) {
        int ans = -1; 
        while(a>0) {
            a = a>>1; 
            ans++; 
        }
        return ans; 
    }
    public int rangeBitwiseAnd(int left, int right) {
        int result =0 ; 
        while(left > 0 && right> 0) {
            int msb1= msb(left) ; 
            int msb2= msb(right) ; 
            if(msb1 != msb2) break;
            int val = 1 << msb1; 
            result = result+ val; 
            left = left - val; 
            right = right - val; 
        } 
        return result; 
    }
}


