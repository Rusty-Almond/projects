#include <iostream>
#include <algorithm>
#include <cmath>
int main()
{ int n,t,i,j,time=0,cost=0,temp;
  long long c;
  std::cin >>t;
  int out[t];
  long* a;//declare pointer
  temp=t;
  while(t>0)
   { std::cin >> n >> c;
     a=new long[n];//allocate array on heap
     for(i=0;i<n;i++)
      std::cin >> a[i];
     std::sort(a,a+n);
     cost=0;
     time=0;
     for(i=n-1;i>=0;i--)
      { if(a[i]*pow(2,time)>c)
         cost++;
        else  
         time++;
     }
     out[t-1]=cost;
     delete[] a;//free memory
     t--;
     }
    for(i=temp-1;i>=0;i--)
     std::cout << out[i]<<"\n";
    }