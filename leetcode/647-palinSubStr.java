class Solution {
    public boolean isPalindromic(String a){
        char[] s = a.toCharArray();
        int n = s.length; 
        for(int i=0;i <n/2; i++){
            if(s[i] != s[n-i-1]) return false; 
        }
        return true; 
    }
    public int countSubstrings(String s) {
        int n = s.length(); 
        int count =n; 
        for(int i=0; i<n; i++){
            String k = String.valueOf(s.charAt(i)); 
            for(int j=i+1; j<n;j++){
                k = k+ s.charAt(j); 
                if(isPalindromic(k)) count++; 
            }
        }
        return count ; 
    }
}
