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
            int n=sc.nextInt() ; 
            int a[] = new int[n]; 
            for(int i=0; i<n;i++){
                a[i] = sc.nextInt(); 
            }
            int f=0; 
            if(n==1) f = 1;  
            else if(n==3){
                int k=1; 
                for(int i=0; i<n-1;i++){
                    if(a[i] <= a[i+1] ) continue; 
                    else k = 0; 
                }
                if(k==0){
                    int temp = a[0] ; 
                    a[0] = a[2]; 
                    a[2] = temp; 
                }
                k =1 ; 
                for(int i=0; i<n-1;i++){
                    if(a[i] <= a[i+1] ) continue; 
                    else k = 0; 
                }
                if(k==1) f=1; 
                else f=0; 
            }
            else if(n==2) {
                int k =1 ;
                for(int i=0; i<n-1;i++){
                    if(a[i] <= a[i+1] ) continue; 
                    else k = 0; 
                }
                if(k==0) f=0 ; 
                else f=1; 
            }else f=1 ; 
            
            if(f==1) System.out.println("yes"); 
            else System.out.println("NO"); 
        }
	}
}

