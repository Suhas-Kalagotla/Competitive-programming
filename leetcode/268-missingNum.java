class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length; 
        int sum = 0 ; 
        for(int i=0; i<=n;i++) sum += i; 
        int actualSum =0; 
        for(int i=0; i<n;i++) actualSum+= nums[i]; 
        return sum - actualSum; 
    }
}
