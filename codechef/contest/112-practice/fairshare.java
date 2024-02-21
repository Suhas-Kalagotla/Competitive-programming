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
            long n = sc.nextLong(); 
            long k = sc.nextLong(); 
            k++; 
            int amount = (int)(n/ k);
            System.out.println(n-(amount*(k-1)));
        }
	}
}

