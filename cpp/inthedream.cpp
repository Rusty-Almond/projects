#include <iostream>
#include <cmath>
using namespace std;
int main()
{ ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t,a,b,c,d;
  cin >>t;
  int i,k,l;
  for(i=0;i<t;i++)
   { cin >> a>>b>>c>>d;
     k=(a+b)/3;
     c=c-a;
     d=d-b;
     l=(c+d)/3;
     if(k<=min(a,b) && l<=min(c,d))
      cout << "YES" <<endl;
     else
      cout <<"NO"<<endl;
    }
}