import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0)
        {
            long n=sc.nextLong();
            if(n==1)
                System.out.println("1");
            else
            {long nb = (long)(Math.log(n)/Math.log(2));
                long bl = nb-1;
                long bm = nb+1;  
                long b2=(long)Math.pow(2,nb);
                long bits_less_2 = (long)Math.pow(2,bl);
                long bits_more_2 = (long) Math.pow(2,bm);
                if(n>=b2 && n<=bits_more_2-bits_less_2-1)
                    System.out.println(bits_less_2);
                else
                    System.out.println((b2+n-bits_more_2+1));}
        }
    }
}


