import java.util.*; 
import java.lang.Math.*; 
import java.io.*; 
class Solution {
    public static  ArrayList<Integer> quadraticRoots(int a, int b, int c) {
        // code here
        int z = (b*b) - ( 4 * a * c ); 

        if ( z <0 ) {
            ArrayList<Integer> y = new ArrayList<Integer>(); 
            y.add(-1); 
            return y; 
        }else if(z==0){
            ArrayList<Integer> y = new ArrayList<Integer>(); 
            y.add(-b/(2*a)); 
            y.add(-b/(2*a)); 
            return y; 
        }
        double d = (double)(-b + Math.sqrt(Math.abs(z)) ) / (2*a); 
        double e = (double)(-b - Math.sqrt(Math.abs(z)) ) / (2*a); 
        ArrayList<Integer> ans = new ArrayList<>(); 
        ans.add((int)Math.floor(Math.max(d,e))); 
        ans.add((int)Math.floor(Math.min(d,e))); 
        return ans; 
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in); 
        int a = sc.nextInt(); 
        int b = sc.nextInt(); 
        int c = sc.nextInt(); 
        System.out.println(quadraticRoots(a,b,c)); 
    }
}
