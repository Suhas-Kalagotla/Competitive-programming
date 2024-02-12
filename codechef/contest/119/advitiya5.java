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
            int k = sc.nextInt(); 
            int a[] = new int[n] ; 
            for(int i=1; i<k;i++){
               System.out.print(i + " "); 
            }
            int temp = k+1; 
            while(k <=n) {
                System.out.print(k+" "); 
                k+=2; 
            }
            while(temp<=n){
                System.out.print(temp+" "); 
                temp+=2; 
            }
            System.out.println();
        }
    }
}


