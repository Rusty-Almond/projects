import java.util.*;
public class gamewithintegers 
{ public static void main(String args[])
   { Scanner sc=new Scanner(System.in);
     int t,n;
     t=sc.nextInt();
     int b[]=new int[t];
     while(t-->0)
      { n=sc.nextInt();
        if((n+1)%3==0 || (n-1)%3==0)
         b[t]=1;
        else
         b[t]=2;
        }
     for(int i=b.length-1;i>=0;i--)
      { if(b[i]==1)
         System.out.println("First");
        else 
         System.out.println("Second");
      }
    }
    
}
