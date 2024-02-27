import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		for(int i=0;i<t;i++)
		{
		    double n=sc.nextDouble();
		    double m=1.0-n;
		    double ans=Math.max((n*(2*m-1)),(m*(2*n-1)));
		    System.out.println(10000.0+10000.0*ans);
		}
	}
}


