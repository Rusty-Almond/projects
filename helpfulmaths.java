import java.util.*;
public class helpfulmaths 
{ public static void main(String args[])
  { Scanner sc=new Scanner(System.in);
    String s=sc.nextLine(),k;
    StringTokenizer st=new StringTokenizer(s,"+");
    int c=st.countTokens();
    int i,c1=0,c2=0,c3=0;
    for(i=0;i<c;i++)
     { k=st.nextToken();
       if(Integer.parseInt(k)==1)
        c1++;
       else if(Integer.parseInt(k)==2)
        c2++;
       else
        c3++;
     }    
//new thing StringBuilder
StringBuilder sb = new StringBuilder();

for (i = 0; i < c1; i++) sb.append("1+");
for (i = 0; i < c2; i++) sb.append("2+");
for (i = 0; i < c3; i++) sb.append("3+");

// Remove the last '+'
if (sb.length() > 0) sb.setLength(sb.length() - 1);

System.out.println(sb.toString());

}
}
 