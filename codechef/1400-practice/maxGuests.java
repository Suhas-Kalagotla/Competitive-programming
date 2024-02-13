import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
        Scanner sc= new Scanner(System.in); 
        int tc = sc.nextInt(); 
        while(tc-->0){
            int n = sc.nextInt(); 
            int [] in = new int[n]; 
            int[] out = new int[n]; 
            for(int i=0;i <n;i++){
                in[i] = sc.nextInt(); 
            }
            for(int i=0;i <n;i++){
                out[i] = sc.nextInt(); 
            }
            Arrays.sort(in); 
            Arrays.sort(out); 
            int count =0, c = 0; 
            for(int i=0;i<n;i++){
                if(in[i] < out[c]) count++; 
                else c++; 
            }
            System.out.println(count);
        }
	}
}

