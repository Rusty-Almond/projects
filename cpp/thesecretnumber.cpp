#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{ int t;
  cin >> t;
  int i,j,k,n=0;
  long long d,p=10;
  vector<long long> v(t);
  vector<long long> out;
  for(i=0;i<t;i++)
   cin >> v[i];
  for(i=0;i<t;i++)
   { k=2;
     n=0;
     d=11L;
     p=10L;
     out.clear();
     while(d<=v[i])
      { if(v[i]%(d)==0)
         { out.push_back(v[i]/d);
         n++;
         }
      p*=10;
      d=p+1;
      }
     cout << n <<endl;
     for(j=n-1;j>=0;j--)
      { cout << out[j]<<" ";
        if(j==0)
         cout <<"\n";
      }
    }
}