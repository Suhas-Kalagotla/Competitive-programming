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
            int []a = new int[n]; 
            for(int i=0; i<n;i++) a[i] = sc.nextInt(); 
            int []freq = new int[n+1]; 

            for(int i=0; i<n;i++) {
                freq[a[i]]++; 
            }
            int sum =0; 
            for(int i=0; i<n-1;i++){
                sum =a[i]; 
                for(int j=i+1; j<n;j++){
                    if(sum + a[j] > n) break;
                    else{
                        sum += a[j]; 
                        freq[sum]++; 
                    }
                }
            }
            for(int i=1; i<=n;i++) 
                System.out.print(freq[i] + " ") ; 
            System.out.println(); 
        }
	}
}

