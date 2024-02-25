import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner s = new Scanner(System.in);
        
        int t = s.nextInt();
        while(t-->0) {
            int N = s.nextInt();
            if((N-1)%2==0){
                System.out.println("YES");
                int i;
            for(i=0; i<N; i++){
                int[] a = new int[N];
                for(int j=0; j<N; j++)
                    a[j]=0;
                int k = 0;
                for(int j=(i+1)%N; ; j++){
                    if(k<(N-1)/2){
                        a[j%N]=1;
                       k++;
                    }
                    else{
                        break;
                    }
                }
                for(int j=0; j<N; j++)
                    System.out.print(a[j]);
                System.out.println();
            }
        }
        else{
            System.out.println("NO");
        }
        }
	}
}
