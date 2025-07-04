/* A. Square Year
time limit per test 1 second
memory limit per test 256 megabytes
One can notice the following remarkable mathematical fact: the number 2025 can be represented as (20+25)^2
You are given a year represented by a string s consisting of exactly 4 characters. Thus, leading zeros are allowed in the year representation. For example, "0001", "0185", "1375" are valid year representations. You need to express it in the form (a+b)2, where a and b
are non-negative integers, or determine that it is impossible.
For example, if s= "0001", you can choose a=0, b=1, and write the year as (0+1)^2=1

Input
The first line of the input contains a single integer t(1≤t≤10^4) — the number of test cases.
The following lines describe the test cases.
The only line of each test case contains a string s consisting of exactly 4 characters. Each character is a digit from 0 to 9

Output
On a separate line for each test case, output:
Two numbers a and b (a,b≥0) such that (a+b)2=s if they exist. If there are multiple suitable pairs, you may output any of them.
The number -1  otherwise. 
*/
import java.util.*;
public class squareyear 
{ public static void main(String args[])
 { Scanner sc=new Scanner(System.in);
  int t=sc.nextInt();
  sc.nextLine();
  if(t>=1 && t<=10000)
   { String s[]=new String[t];
     int i;
     for(i=0;i<t;i++)
      { s[i]=sc.nextLine();
        if(s[i].length()!=4)
         { System.out.println("Wrong input format,try again");
           i--;
         }
        }
     for(i=0;i<t;i++)
      { calculation c=new calculation(s[i]);
        c.output();}
   }
   else 
    System.out.println("Wrong Input test cases");
}
}

class calculation
 { private String y;
   public calculation(String y)
    { this.y=y;
    }
   public void output()
    { int year=Integer.parseInt(y);
      double k=Math.sqrt(year); 
      int l=(int)k;
      if((l*l)==year)
       System.out.println("0 "+l);
      else 
       System.out.println("-1");
      }
    }