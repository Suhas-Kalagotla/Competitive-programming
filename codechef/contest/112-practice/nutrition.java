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
            int b[] = new int[n]; 
            for(int i=0; i<n;i++){
                b[i] = sc.nextInt(); 
            }
            int max[] = new int[n+1]; 
            for(int i=0; i<n;i++){
                if(b[i] > max[a[i]]) max[a[i]] = b[i]; 
            }
            Arrays.sort(b); 
            int ans =0; 
            for(int i=1; i<=n;i++){
                if(max[i] > 0){
                    ans+= max[i]; 
                }
            }
            System.out.println(ans); 
        }
	}
}


