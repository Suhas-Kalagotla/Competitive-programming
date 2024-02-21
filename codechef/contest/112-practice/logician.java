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
            int n = sc.nextInt(); 
            String temp = sc.nextLine(); 
            String s = sc.nextLine(); 
            char[] a = s.toCharArray(); 
            int f =1; 
            int i=0; 
            for(i=0; i<n-1;i++){
                if(a[i] =='0') {
                    System.out.println("NO");
                    f=0; 
                }else if(f==0) System.out.println("NO"); 
                else System.out.println("IDK"); 
            }
                if(a[i]=='1' && f==1) System.out.println("YES"); 
                else System.out.println("NO"); 
        }
	}
}


