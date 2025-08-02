import java.util.*;
public class nextround 
{ public static void main(String args[])
  { Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int k=sc.nextInt();
    int i,j,temp;
    int a[]=new int[n];
    for(i=0;i<n;i++)
     { a[i]=sc.nextInt();
     }
    Arrays.sort(a);
    for(i=0;i<n/2;i++)
     { temp=a[i];
       a[i]=a[n-i-1];
       a[n-1-i]=temp;
     }
    temp=0;
    for(i=0;i<n;i++)
     { if(a[i]!=0)
        { if(i<k)
        { temp++;
        }
        else if(i>=k && a[i]==a[k-1])
         temp++;
        else
         break;
        }  
       else
        break; 
    }
    System.out.println(temp);
    }
}
