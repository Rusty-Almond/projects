#include <bits/stdc++.h>
using namespace std;
int main()
{ ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  long long int a,b,s,k,i,ma;
  cin >> t;
  while(t-->0)
  { cin >> a >> b;
    k=0;
    ma=-1;
    if(b%2==0)
    {if(b%4==0)
      { if(a%2==0)
        cout << (a*(b/2))+2<<"\n";
       else 
        { k=b/2;
          cout << (a*k)+2 <<"\n";
        }
      }
      else 
      { if(a%2==0)
         { k=b/2;
          cout << (a*k)+2 <<"\n";
        }
        else
         cout << "-1\n";
      }
    }
    else
     { if(a%2==0)
        cout << "-1\n";
       else
        cout << ((a*b)+1) <<"\n";
     }
  }
}