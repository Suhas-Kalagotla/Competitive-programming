import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
        Scanner sc = new Scanner(System.in); 
        long tc = sc.nextInt(); 
        while(tc-->0){
            long n = sc.nextInt(); 
            long m = sc.nextInt(); 
            long x = sc.nextInt(); 
            long y = sc.nextInt(); 
            long l = sc.nextInt(); 

            long total=n*m;

            long ans=1;
            long a=1; 
            long r=m-y;
            r=r/l;
            a=a+r;
            long b=y-1;
            b=b/l;
            a=a+b;

            long cols=1+ (n-x)/l + (x-1)/l;
            ans=a*cols;
            System.out.println(ans); 
        }
        
	}
}


