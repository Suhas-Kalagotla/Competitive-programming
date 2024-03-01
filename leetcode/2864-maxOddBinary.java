class Solution {
    public String maximumOddBinaryNumber(String s) {
        char[] a = s.toCharArray(); 
        int zeros = 0 , ones=0; 
        for(int i=0; i<a.length; i++){
            if(a[i] =='0') zeros++; 
            else ones++; 
        }
        char[] ans = new char[a.length]; 
        int p=0; 
        for(int i=0; i<ones; i++){
            ans[p++] = '1'; 
        }
        for(int i=0; i<=zeros; i++) ans[p++] ='0'; 
        ans[p++] = '1'; 
        return new String(ans); 
    }
}
