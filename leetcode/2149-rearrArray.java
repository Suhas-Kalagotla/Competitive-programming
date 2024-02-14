class Solution {
    public int[] rearrangeArray(int[] nums) {
        int n = nums.length; 
        int a[] = new int[n/2]; 
        int b[] = new int[n/2]; 
        int p=0 , q=0; 
        for(int i=0;i<n;i++){
            if(nums[i] > 0) a[p++] = nums[i]; 
            else b[q++] = nums[i]; 
        }
        int ans[] = new int[n]; 
        int x =0 , y =0; 
        for(int i=0;i <n;i++){
            if(i%2==0) ans[i] = a[x++]; 
            else ans[i] = b[y++]; 
        }
        return ans; 
    }
}
