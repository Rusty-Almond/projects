#include <iostream>
using namespace std;
int main()
{ ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int m,n,a;
  long long k,r,c;
  cin >> n >> m >> a;
  if(n>=a)
  {if(n%a==0)
   r=n/a;
  else
   r=n/a+1;
  }
  else
   { r=1;}
  if(m>=a)
  {if(m%a==0)
   c=m/a;
  else
   c=m/a + 1;
  }
  else
   c=1;
  k=c*r;
  cout << k <<endl;
}