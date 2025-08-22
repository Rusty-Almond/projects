#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{ int t;
  cin >> t;
  vector<string> v(t);
  int i,j,n,len;
  string in,per,b;
  for(i=0;i<t;i++)
   { cin >> n;
     cin >> in;
     cin >> len;
     cin >>b;
     cin >> per;
     for(j=0;j<len;j++)
      { if(per[j]=='V')
         in=b[j]+in;
        else
         in=in+b[j];
      }
      v[i]=in;
    }
   for(i=0;i<t;i++)
    {cout << v[i] <<endl;
    }
}