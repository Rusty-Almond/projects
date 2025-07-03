import java.util.*;
public class waytoolongwords 
 { public static void main(String args[])throws Exception
   { Scanner sc=new Scanner(System.in);
     int l=sc.nextInt();
     sc.nextLine();
     int i;
     String s[]=new String[l];
     for(i=0;i<l;i++)
      { s[i]=sc.nextLine();
      }
     for(i=0;i<l;i++)
      { if(s[i].length()>10)
         { System.out.println(s[i].charAt(0)+""+(s[i].length()-2)+""+s[i].charAt(s[i].length()-1));
        }
        else
         System.out.println(s[i]);
      }
    }    
}
