class Solution {
    public boolean isPowerOfTwo(int n) {
       int count =0 ; 
       int f = 1 ; 
       if(n<=0) return false; 
       while(n>0){
           int k = n%2; 
           if(k==1) count++; 
           if(count>1) { 
               f = 0 ; 
               break; 
           }
           n /=2; 
       }
       if(f==1) return true; 
       return false; 
    }
}

