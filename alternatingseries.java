import java.util.*;
public class alternatingseries {
    public static void main(String args[]) {
        Scanner sc=new Scanner(System.in);
      int i,j,t;
      t=sc.nextInt();
      int in[]=new int[t];
      for(i=0;i<t;i++) {
        in[i]=sc.nextInt();
      }
      for(i=0;i<t;i++)
       { for(j=1;j<=in[i];j++) 
          { if((j%2==0))
             if(j==in[i])
              System.out.print("2");
             else 
              System.out.print("3 ");
            else
              System.out.print("-1 ");
            }
        System.out.println();
    }
    }
}