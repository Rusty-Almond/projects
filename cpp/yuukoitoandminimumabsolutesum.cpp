#include <bits/stdc++.h>
using namespace std;
int main()
{ int t;
  cin >> t;
  while(t-->0)
   { int n,j,d=0;
     cin >> n;
     int i;
     vector<int> a(n);
     for(i=0;i<n;i++)
      cin >> a[i];
     if(a[0]==-1)
      { if(a[n-1]==-1)
         {a[0]=a[n-1]=0;
         }
        else
         a[0]=a[n-1];
      }
     else
      { if(a[n-1]==-1)
         a[n-1]=a[0];
      }
     cout <<abs(a[n-1]-a[0])<<endl;
     for(i=0;i<n;i++)
      { if(a[i]==-1)
         cout <<"0 ";
        else
         cout << a[i]<<" ";
      }
     cout<<endl;

}
}