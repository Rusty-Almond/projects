import java.util.*;
public class LineTrip 
{ public static void main(String args[])
   { Scanner sc=new Scanner(System.in);
     int t=sc.nextInt();
     int b[]=new int[t];
     int x,n;
     int i;
     int m=t;
     while(t>0)
     {n=sc.nextInt();
     x=sc.nextInt();
     int a[]=new int[n+2];
     for(i=1;i<=n;i++)
      { a[i]=sc.nextInt();
      }
     a[0]=0;
     a[n+1]=x;
     int d=0;
     for(i=1;i<a.length;i++)
      { if(i==(a.length-1))
         d=Math.max(d,(2*(a[i]-a[i-1])));
         else
          d=Math.max(d,a[i]-a[i-1]);
      }
     b[t-1]=d;
     t--;
    }
    for(i=m-1;i>=0;i--)
     System.out.println(b[i]);
    }
}
