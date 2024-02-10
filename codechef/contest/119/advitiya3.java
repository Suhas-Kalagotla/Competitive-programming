import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc = new Scanner(System.in); 
		// your code goes here\
		int tc = sc.nextInt(); 
        while(tc-->0){
            int n = sc.nextInt(); 
            long k = sc.nextInt(); 
            long a[] = new long[n]; 
            for(int i=0;i <n;i++){
                a[i] = sc.nextInt(); 
            }
            long ans =Integer.MAX_VALUE,mul=0 ; 
            for(int i=0;i <n;i++){
                        mul = a[i]/k;
                        ans = Math.min(ans , a[i] %k); 
            }
            if(ans == Integer.MAX_VALUE) 
                System.out.println(-1);
            else
            System.out.println(ans);
        }
	}
}


