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
            int a[] = new int[n]; 
            for(int i=0; i<n;i++){
                a[i] = sc.nextInt(); 
            }
            int f=1; 
            for(int i=0; i<n;i++){
                if(a[i] > 4) continue; 
                else {
                    f=0; 
                    break;
                }
            }
            if(f==1) System.out.println("yes"); 
            else System.out.println("no"); 
        }
	}
}


