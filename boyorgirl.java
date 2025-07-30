import java.util.*;
public class boyorgirl 
{ public static void main(String args[])
   { Scanner sc=new Scanner(System.in);
     String s=sc.nextLine();
     Set<Character> c=new HashSet<>();
     char ch[]=s.toCharArray();
     int i;
     for(i=0;i<ch.length;i++)
     { c.add(ch[i]);}
     if(c.size()%2==0)
     System.out.println("CHAT WITH HER!");
     else
     System.out.println("IGNORE HIM!");
   }    
}
