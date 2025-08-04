import java.util.*;
public class dominopiling {
 public static void main(String args[])
 { Scanner sc=new Scanner(System.in);
   int m,n;
   m=sc.nextInt();
   n=sc.nextInt();
   System.out.println((m/2)*n+(m%2)*(n/2));
 }    
}
