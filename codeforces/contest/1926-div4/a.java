import java.util.*; 

public class a { 
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in); 
        int tc = sc.nextInt(); 
        String temp = sc.nextLine(); 
        while(tc-->0){
            String a = sc.nextLine(); 

            char s[] = a.toCharArray(); 
            int count =0 ; 
            int c =0 ; 
            for(int i=0; i<s.length; i++){
                if(s[i] == 'A') count++; 
                else c++; 
            }
            if(count>c) System.out.println('A'); 
            else System.out.println('B');
        }
    }
}

