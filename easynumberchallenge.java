import java.util.*;
public class easynumberchallenge
{ public static void main(String args[])
  { Scanner sc=new Scanner(System.in);
    int a,b,c,i,j,k,l,s,m;
    long t1=1,t2=0;
    Map<Integer,Integer> x=new HashMap<>();
    a=sc.nextInt();
    b=sc.nextInt();
    c=sc.nextInt();
    int n[]=new int[a*b*c+1];
    for(i=1;i<=a;i++)
    { for(j=1;j<=b;j++)
       { for(k=1;k<=c;k++)
         { n[i*j*k]++;} }}
    for(j=1;j<n.length;j++) 
        { x.clear();
          i=j;
           if(n[i]!=0)
           { m=(int)Math.sqrt(i);
            for(l=2;l<=m;l++)
             { s=0;
               while(i%l==0)
                { i=i/l;
                  s++;
                }
               if(s>0)
                x.put(l,s);
             }
            if(i>1)
             x.put(i,1);
            t1=1;
            ArrayList<Integer> ex =new ArrayList<>(x.values());
            for(l=0;l<ex.size();l++)
             { t1=t1*(ex.get(l)+1);}
            t2=t2+t1*n[j];
           }
          }
          System.out.println(t2%1073741824);
}
}