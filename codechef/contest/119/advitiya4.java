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
            int o = sc.nextInt(); 
            String temp = sc.nextLine();  
            String s = sc.nextLine(); 
            char a[] = s.toCharArray(); 
            int count =1, max_count=1; 
            for(int i=0; i<n-1;i++){
                if(a[i] == a[i+1]) count++; 
                else count =1;
                max_count = Math.max(count,max_count);
            }
            System.out.print(max_count+" " ); 
            while(o-->0){
                char k = sc.next().charAt(0); 
                if(k == a[n-1])
                    count++; 
                else{
                    a[n-1] = k; 
                    count = 1; 
                }
                max_count = Math.max(count,max_count); 
                System.out.print(max_count+" "); 
            }
           System.out.println();  
        }
	}
}

