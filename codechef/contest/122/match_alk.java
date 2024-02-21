import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
        Scanner sc = new Scanner(System.in); 
        int tc = sc.nextInt(); 
        while(tc-->0){
            int n = 0; 
            int ans =0; 
            int score =0 ; 
            while(n++<22){
                int a = sc.nextInt(); 
                int b = sc.nextInt(); 
                int max = a + (b*20);
                if(max > score){
                    score = max; 
                    ans = n; 
                }
            }
            System.out.println(ans); 
        }
	}
}

