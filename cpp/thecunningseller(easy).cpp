#include <iostream>
#include <vector>
using namespace std;
int maxpow(int a)
 { int k=1;
  long long d=3;
   while(a>=d)
    { k++;
      d=d*3;
    }
   return k-1;
  }
long long power(int a)
 { if(a==0)
    return 1;
   else 
    return 3*power(a-1);
 }
int main()
{ int t;
  cin >> t;
  vector<long long> v(t);
  int i,j,d;
  long long n,ans;
  int temp=t;
  while(t>0)
   { cin >> n;
     d=0;
     ans=0;
     while(n!=0)
    { if(n>=2)
       { d=maxpow(n);
       n=n-power(d);
       ans=ans+power(d+1);
       if(d>0)
       ans=ans+d*(power(d-1));
       }
      else
       { 
         ans=ans+n*(3);
         n=0;
        }
    }
    v[t-1]=ans;
    t--;
   }
   for(i=temp-1;i>=0;i--)
     cout << v[i] <<endl;
      
}
