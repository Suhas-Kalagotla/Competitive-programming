import java.util.*; 
import java.lang.Math.*; 

class Solution{
    public static int digitsInFactorial(int n){
        // code here
        if(n<0) return 0; 
        if(n<=1) return 1; 
        double digits = 0; 
        for(int i=2; i<=n; i++){
            digits += Math.log10(i); 
        }
        return (int)(Math.floor(digits))+1; 
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in); 
        int n = sc.nextInt(); 
        System.out.println(digitsInFactorial(n)); 
    }
}
