import java.util.*;
public class submissionisallyouneed 
{ public static void main(String args[])
    { Scanner sc=new Scanner(System.in);
      int t,n;
      t=sc.nextInt();
      int a[]=new int[t];
      int b[],i,freq1,freq0,sum;
      while(t>0)
      { n=sc.nextInt();
        b=new int[n];
        freq1=0;
        freq0=0;
        sum=0;
        for(i=0;i<n;i++)
         { b[i]=sc.nextInt();
           if(b[i]==1)
            freq1++;
           else if(b[i]==0)
            freq0++;
           else
            sum=sum+b[i];
         }
        if(freq0>0 && freq1>0 && freq0>freq1)
        a[t-1]=freq1*2+sum+(freq0-freq1);
        else if (freq0>0 && freq1>0 && freq0<=freq1)
        a[t-1]=freq0*2+sum+(freq1-freq0);
        else if(freq0>0 )
         a[t-1]=freq0+sum;
        else if(freq1>0)
         a[t-1]=sum+freq1;
        else 
         a[t-1]=sum;
        t--;
      }
      for(i=a.length-1;i>=0;i--)
       { System.out.println(a[i]);
      }
    }
}
