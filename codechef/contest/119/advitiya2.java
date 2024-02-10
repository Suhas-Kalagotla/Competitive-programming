import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc = new Scanner(System.in); 
		// your code goes here\
		int tc = sc.nextInt(); 
		while(tc-->0){
        int n = 5; 
		int a [] = new int[5]; 
		for(int i=0;i <n;i++){
		    a[i] = sc.nextInt(); 
		}
		int sum =0; 
		for(int i=0;i <n;i++){
		    if(a[i] == 1) sum++; 
		}
		if(sum >=4) System.out.println("YES"); 
		else System.out.println("No"); 
		}
	}
}
