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
            String t = sc.nextLine(); 
            char a[] = s.toCharArray(); 
            char b[] = t.toCharArray(); 
            int ans[] = new int[]; 
            for(int i=0;i <n;i++){
               int k = (int) a[i]; 
               int l = (int) b[i]; 
               int v=0 ; 
               while(k!=l){
                   k=(char)((int)k +3); 
                   if((int)k>90) k =(char)((int) k -26); 
                   v++; 
               }
               ans[i] = v; 
            }
            for(int i=0; i<n;i++)
                System.out.print(ans[i]+" "); 
            System.out.println(); 
        }
	}
}

